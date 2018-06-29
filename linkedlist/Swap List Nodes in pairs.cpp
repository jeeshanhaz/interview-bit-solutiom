/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    
    if(A==NULL || A->next==NULL){
        return A;
    }
    
    
    
    
    ListNode* current=A;
    ListNode* result=A->next;
    while(1){
        ListNode* temp=current->next->next;
        current->next->next=current;
        if(temp==NULL || temp->next==NULL){
            current->next=temp;
            break;
        }
        current->next=temp->next;
        current=temp;
    }
    
    return result;
    
}



