#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void CircularLinkedListTraversal(Node *head)
{
    int counter = 0;
    Node *ptr = head;
    do
    {
        printf("Element %d = %d\n", counter, ptr->data);
        ptr = ptr->next;
        counter++;
    } while (ptr != head);
    printf("\n");
}

Node *CircularLinkedListDeletionAtBeggining(Node *head)
{
    Node *p = head;
    Node *q = head->next;
    while (p->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    head = p->next;
    return head;
}

Node *CircularLinkedListDeletionAtIndex(Node *head, int index)
{
    int counter = 0;
    Node *p = head;
    Node *q = head->next;

    while (counter != index - 1)
    {
        p = p->next;
        q = q->next;
        counter++;
    }

    p->next = q->next;
    free(q);
    return head;
}

Node *CircularLinkedListDeletionWithKeyValue(Node *head, int value)
{
    Node *p = head;
    Node *q = head->next;

    while (q->data != value && q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    else
    {
        printf("Error");
    }
    return head;
}

Node *CircularLinkedListDeletionAtEnd(Node *head)
{
    Node *p = head;
    Node *q = head->next;

    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = head;

    CircularLinkedListTraversal(head);
    // head = CircularLinkedListDeletionAtBeggining(head);
    // head = CircularLinkedListDeletionAtIndex(head, 2);
    // head = CircularLinkedListDeletionWithKeyValue(head, 3);
    head = CircularLinkedListDeletionAtEnd(head);
    CircularLinkedListTraversal(head);
    return 0;
}