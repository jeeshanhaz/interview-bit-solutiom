/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if(A->next==NULL || B==C){
        return A;
    }
    
    ListNode *temp, *current, *prev, *next, *start, *end;
    int i = 1;
    temp = A;
    bool flag = false;
    if(B==1)
        flag = true;
    while(i<B)
    {
        start = temp;
        temp = temp->next;
        ++i;
    }
    current = next = temp;
    
    while(i<C)
    {
        temp = temp->next;
        ++i;
    }
    end = temp; 
    prev = temp->next;
    ListNode *endplus = end->next;
    int k=1;
    int n=C-B;
    while(k<=n)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        k++;
    }
    start->next=current;
    if(flag)
        A = prev;
    else
        start->next = prev;
    return A;
}



