/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    
    if(A==NULL || A->next==NULL){
        return A;
    }
    
    ListNode* curr=A;
    int count=0;
    while(curr!=NULL){
        curr=curr->next;
        count++;
    }
    
    int n=count/2;
    ListNode* current=A;
    int i=1;
    while(i<n){
        current=current->next;
        i++;
    }
    ListNode* mid=current;
    
    ListNode* prev=NULL;
    ListNode* iter=current->next;
    ListNode* temp;
    while(iter!=NULL){
        temp=iter->next;
        iter->next=prev;
        prev=iter;
        iter=temp;
    }
    mid->next=prev;

    ListNode* end=mid;
    ListNode* move=A;
    ListNode* temp2;
    ListNode* temp3;
    
    while(move!=mid){
        temp2=move->next;
        temp3=prev->next;
        move->next=prev;
        prev->next=temp2;
        prev=temp3;
        move=temp2;
    }
    if(prev!=NULL){
        move->next=prev;
    }
    
    
    return A;
    
    
    
    
}



