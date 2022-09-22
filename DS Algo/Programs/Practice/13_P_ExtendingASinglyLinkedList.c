#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *addNode(Node *head, int data)
{
    Node *ptr;
    Node *p = head;

    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }

    ptr->next = p->next;
    p->next = ptr;

    return head;
}

void LinkedListTraversal(Node *ptr)
{
    int counter = 0;
    while (ptr != NULL)
    {
        printf("Elemenet %d = %d\n", counter, ptr->data);
        ptr = ptr->next;
        counter++;
    }
    printf("\n");
}

int sizeOfLinkedList(Node *head)
{
    int counter = 0;
    Node *p = head;
    while (p != NULL)
    {
        p = p->next;
        counter++;
    }
    return counter;
}

int main()
{
    int quantity;
    int data;
    int counter = 0;
    Node *First_Head;
    Node *second_End;

    First_Head = (Node *)malloc(sizeof(Node));
    second_End = (Node *)malloc(sizeof(Node));

    First_Head->data = 1;
    First_Head->next = second_End;

    second_End->data = 2;
    second_End->next = NULL;

    LinkedListTraversal(First_Head);

    printf("How many Nodes do you want to add at the end?\n");
    scanf("%d", &quantity);

    while (counter < quantity)
    {
        printf("Enter the Numeric Value that you want to store in the Node\n");
        scanf("%d", &data);
        First_Head = addNode(First_Head, data);
        counter++;
    }

    LinkedListTraversal(First_Head);

    printf("Size of the Linked List = %d", sizeOfLinkedList(First_Head));

    return 0;
}