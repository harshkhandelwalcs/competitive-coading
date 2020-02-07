#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main()
{
    node *head = new node(5);
    node *temp = head;

    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = new node(6);
    head = temp;
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}