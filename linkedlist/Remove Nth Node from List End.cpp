/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* current=A;
    
    int l=0;
    while(current!=NULL){
        l++;
        current=current->next;
    }
    if(l==1){
        return NULL;
    }
    int c=l-B;
    if(B>l || c==0){
        ListNode* temp=A->next;
        delete(A);
        return temp;
        
    }
    
    ListNode* prev=A;
    ListNode* curr=A;
    int i=0;
    while(i<c){
        prev=curr;
        curr=curr->next;
        i++;
    }
    ListNode* temp=curr->next;
    delete(curr);
    prev->next=temp;
    
    return A;
    
    
}



