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

ListNode* reverseList(ListNode *A, int B)
{
    ListNode *curr = A;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    int counter = 0;

    while (curr != NULL && counter < B)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        counter++;
    }

    if (next != NULL)
    {
        A->next = reverseList(next, B);
    }

    return prev;
}
