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

Node *CircularLinkedListInsertionAtBeggining(Node *head, int data)
{
    Node *ptr;
    Node *p;
    ptr->data = data;

    p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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
    head = CircularLinkedListInsertionAtBeggining(head, 23);
    CircularLinkedListTraversal(head);
    return 0;
}