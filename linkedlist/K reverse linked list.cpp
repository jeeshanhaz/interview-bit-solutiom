/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode* current=A;
    ListNode* forward=NULL;
    ListNode* prev=NULL;
    int count=0;
    while(count<B){
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
        count++;
    }
    
    if(current!=NULL){
        A->next=reverseList(current,B);
    }
    return prev;
    
    
}



