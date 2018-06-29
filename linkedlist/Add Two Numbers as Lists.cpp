/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int m=0;
    ListNode* cura=A;
    while(cura!=NULL){
        m++;
        cura=cura->next;
    }
    
    int n=0;
    ListNode* curb=B;
    while(curb!=NULL){
        n++;
        curb=curb->next;
    }
    
    if(n>m){
        ListNode* temp=A;
        A=B;
        B=temp;
    }
    
    ListNode* currenta=A;
    ListNode* currentb=B;
    int carry=0;
    while(currentb!=NULL){
        currenta->val=currentb->val+currenta->val+carry;
        if(currenta->val>9){
            carry=1;
            currenta->val=(currenta->val)%10;
            currentb=currentb->next;
            currenta=currenta->next;
        }
        else {
            carry=0;
            currentb=currentb->next;
            currenta=currenta->next;
        }
        
    }
    ListNode* prev=currenta;
    while(currenta!=NULL && carry==1){
        currenta->val=currenta->val+carry;
        if(currenta->val>9){
            currenta->val=(currenta->val)%10;
            prev=currenta;
            currenta=currenta->next;
            carry=1;
        }
        else {
            carry=0;
            prev=currenta;
            currenta=currenta->next;
    }
    }
    
    if(currenta==NULL && carry==1){
        ListNode* temp=(ListNode*)malloc(sizeof(ListNode));
        temp->val=1;
        prev->next=temp;
        currenta=temp;
    }
    
    return A;
}



