#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
} Node;

void twiceTraversal(Node *head, Node *end)
{
    Node *p = head;

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    p = end;

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->pre;
    }
}

int main()
{
    Node *headFirst;
    Node *second;
    Node *third;
    Node *fourthEnd;

    headFirst = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourthEnd = (Node *)malloc(sizeof(Node));

    headFirst->pre = NULL;
    headFirst->data = 1;
    headFirst->next = second;

    second->pre = headFirst;
    second->data = 2;
    second->next = third;

    third->pre = second;
    third->data = 3;
    third->next = fourthEnd;

    fourthEnd->pre = third;
    fourthEnd->data = 4;
    fourthEnd->next = NULL;

    twiceTraversal(headFirst, fourthEnd);

    return 0;
}