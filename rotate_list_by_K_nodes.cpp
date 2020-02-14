#include <bits/stdc++.h>

//merge function
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

ListNode* rotateRight(ListNode* A, int B) {
    ListNode* prev = NULL;
    ListNode* curr = A;
    ListNode* nxp = NULL;
    int counter = 0;
    int listLength = 0;
   
    while(curr!=NULL){
     listLength++;
     curr = curr->next;
    }
    curr = A;
    while(curr!=NULL && (counter < listLength-(B%listLength))){
        prev = curr;
        nxp =  curr->next;
        curr = curr->next;;
        counter++;
    }

    
    while(nxp!=NULL){
        if(nxp->next ==NULL){
            nxp->next = A;
            A= prev->next;
            prev->next = NULL;
        }
        nxp = nxp->next;
    }
    
    return A;
    
}