#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void addNode(Node *ptr, Node *addPosition, int data)
{
    Node *p = ptr;
    Node *q = p->next;
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = data;
    while (q != addPosition)
    {
        q = q->next;
        p = p->next;
    }
    p->next = new;
    new->next = addPosition;
}

void CircularLinkedListTraversal(Node *head)
{
    Node *p = head;
    do
    {
        printf("%d \n", p->data);
        p = p->next;
    } while (p != head);
}

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));
    Node *fifth = (Node *)malloc(sizeof(Node));
    Node *sixth = (Node *)malloc(sizeof(Node));
    Node *seventh = (Node *)malloc(sizeof(Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = seventh;

    seventh->data = 7;
    seventh->next = head;

    addNode(head, sixth, 25);
    CircularLinkedListTraversal(head);
    return 0;
}