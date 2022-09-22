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
    Node *ptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr = head;
    do
    {
        printf("Element %d = %d\n", counter, ptr->data);
        ptr = ptr->next;
        counter++;
    } while (ptr != head);
    printf("\n");
}

Node *CircularLinkedListInsertionAtEnd(Node *head, int data)
{
    Node *ptr;
    Node *p = head;
    Node *q = head->next;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;

    do
    {
        p = p->next;
        q = q->next;
    } while (q->next != head);
    q->next = ptr;
    ptr->next = head;
    return head;
}

int main()
{
    int index;
    int insert;
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

    printf("Enter the data you want to store in the last inserted Node\n");
    scanf("%d", &insert);

    CircularLinkedListTraversal(head);
    head = CircularLinkedListInsertionAtEnd(head, insert);
    CircularLinkedListTraversal(head);

    return 0;
}