#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *pre;
    int data;
    struct node *next;
} Node;

void reverseTraversal(Node *p)
{
    Node *ptr = p;
    while (ptr->next != NULL)
        ptr = ptr->next;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->pre;
    }
}

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));

    head->pre = NULL;
    head->data = 1;
    head->next = second;

    second->pre = head;
    second->data = 2;
    second->next = third;

    third->pre = second;
    third->data = 3;
    third->next = fourth;

    fourth->pre = third;
    fourth->data = 4;
    fourth->next = NULL;

    reverseTraversal(head);

    return 0;
}