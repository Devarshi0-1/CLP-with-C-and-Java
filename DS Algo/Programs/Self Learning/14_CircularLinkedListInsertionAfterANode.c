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

Node *CircularLinkedListInsertionAfterNode(Node *head, Node *preNode, int data)
{
    Node *ptr;
    Node *p = head;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    do
    {
        p = p->next;
    } while (p != preNode);
    ptr->next = preNode->next;
    preNode->next = ptr;
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

    printf("Enter the data you want to store\n");
    scanf("%d", &insert);

    CircularLinkedListTraversal(head);
    head = CircularLinkedListInsertionAfterNode(head, second, insert);
    CircularLinkedListTraversal(head);

    return 0;
}