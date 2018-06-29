/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* current=A;
    ListNode* prev=NULL;
    if(A==0){
        return A;
    }
    if(A->val>=B&&current->next!=0){
        while(current->next!=0&&current->next->val>=B){
            current=current->next;
        }
        if(current->next!=0){
        prev=current->next;
        current->next=current->next->next;
        
        prev->next=A;
        A=prev;}
        else{
            return A;
        }
    }
    else{
        while(current->val<B&&current->next!=0){
            prev=current;
            current=current->next;
        }
        
    }
    while(current->next!=0){
        if(current->next->val<B){
            ListNode* temp;
            temp=prev->next;
            prev->next=current->next;
            current->next=current->next->next;
            prev->next->next=temp;
            prev=prev->next;
        }
        else{
        current=current->next;}
    }
    return A;
}



