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
    Node *p = head;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

Node *CircularLinkedListInsertionAtIndex(Node *head, int data, int index)
{
    int counter = 0;
    Node *ptr;
    Node *p = head;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;

    while (counter != index - 1)
    {
        p = p->next;
        counter++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

Node *CircularLinkedListInsertionAtEnd(Node *head, int data)
{
    Node *ptr;
    Node *p = head;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;

    while (p->next != head)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

Node *CircularLinkedListInsertionAfterNode(Node *head, Node *preNode, int data)
{
    Node *ptr;
    Node *p = head;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;

    while (p != preNode)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
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
    // head = CircularLinkedListInsertionAtBeggining(head, 122);
    // head = CircularLinkedListInsertionAtIndex(head, 122, 2);
    // head = CircularLinkedListInsertionAtEnd(head, 122);
    head = CircularLinkedListInsertionAfterNode(head, third, 122);
    CircularLinkedListTraversal(head);
    return 0;
}