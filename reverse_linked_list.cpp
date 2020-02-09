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

ListNode reverseList(ListNode *A)
{
    ListNode *curr = A;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    A = prev;

    return *A;
}

