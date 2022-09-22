#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *CircularLinkedListTraversal(Node *head)
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

Node *CircularLinkedListInsertionAtIndex(Node *head, int data, int index)
{
    int counter = 0;
    Node *ptr = (Node *)malloc(sizeof(Node));
    Node *p = head;
    Node *q = head->next;

    ptr->data = data;
    do
    {
        p = p->next;
        q = q->next;
        counter++;
    } while (counter != index - 1);
    ptr->next = p->next;
    p->next = ptr;

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

    printf("Enter the data you want to store in the inserted Node\n");
    scanf("%d", &insert);

    printf("Enter the index at which you want to insert Node\n");
    scanf("%d", &index);

    CircularLinkedListTraversal(head);
    head = CircularLinkedListInsertionAtIndex(head, insert, index);
    CircularLinkedListTraversal(head);

    return 0;
}