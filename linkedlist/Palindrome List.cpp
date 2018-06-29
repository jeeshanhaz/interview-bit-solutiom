/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    ListNode* head=A;
    ListNode* tail=A;
    int count=0;
    while(tail!=NULL){
        count++;
        tail=tail->next;
    }
    int n;
    if(count%2==0)
        n=count/2-1;
    else 
        n=count/2;
    while(n){
        head=head->next;
        n--;
    }
    
    ListNode* current=head->next;
    ListNode* prev=NULL;
    while(current!=NULL){
        ListNode* temp2=current->next;
        current->next=prev;
        prev=current;
        current=temp2;
    }
    
    head->next=prev;
    
    ListNode* forward=A;
    ListNode* move=head->next;
    while(move!=NULL){
        if(forward->val!=move->val){
            return 0;
        }
        else {
            forward=forward->next;
            move=move->next;
        }
    }
    
    return 1;
}



