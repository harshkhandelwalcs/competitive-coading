//merge function
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *Solution::mergeTwoLists(ListNode *A, ListNode *B)
{

    ListNode *finalListHead = NULL;
    ListNode *temp = NULL;
    while (A != NULL && B != NULL)
    {
        if (temp == NULL && finalListHead == NULL)
        {
            if (A->val < B->val)
            {
                temp = A;
                finalListHead = A;
                A = A->next;
            }
            else
            {
                temp = B;
                finalListHead = B;
                B = B->next;
            }
        }
        else
        {
            if (A->val < B->val)
            {
                temp->next = A;
                temp = temp->next;
                A = A->next;
            }
            else
            {
                temp->next = B;
                temp = temp->next;

                B = B->next;
            }
        }
    }

    while (A != NULL)
    {
        temp->next = A;
        temp = temp->next;

        A = A->next;
    }

    while (B != NULL)
    {
        temp->next = B;
        temp = temp->next;

        B = B->next;
    }

    return finalListHead;
}
