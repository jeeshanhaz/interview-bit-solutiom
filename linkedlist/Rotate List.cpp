/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    
    if(A==NULL || A->next==NULL){
        return A;
    }
    
    int count=0;
    ListNode* result=A;
    ListNode* current=A;
    ListNode* previous=NULL;
    while(current!=NULL){
        previous=current;
        current=current->next;
        count++;
    }
    B=B%count;
    int n=count-B;
    if(n==count || n==0){
        return A;
    }
    else{
    ListNode* current1=A;
    ListNode* prev=NULL;
    while(n){
        prev=current1;
        current1=current1->next;
        n--;
    }
    
    ListNode* temp;
    temp=prev->next;
    prev->next=NULL;
    A=temp;
    previous->next=result;
    
    return A;}

    
}



