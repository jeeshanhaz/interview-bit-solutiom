/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* current =A;
    while(current!=NULL && current->next!=NULL){
        ListNode* temp;
        if(current->val==current->next->val){
            temp=current->next->next;
            delete(current->next);
            current->next=temp;
        
        }
        else
        current=current->next;
    }

    return A;
}



