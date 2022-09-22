#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void LinkedListTraversal(Node *ptr)
{
    int counter = 0;
    while (ptr != NULL)
    {
        printf("Element %d = %d\n", counter, ptr->data);
        ptr = ptr->next;
        counter++;
    }
    printf("\n");
}

Node *InsertionNodeAtBeggining(Node *head, int data)
{
    Node *ptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

Node *InsertionNodeAtIndex(Node *head, int index, int data)
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

Node *InsertionNodeAtEnd(Node *head, int data)
{
    Node *ptr;
    Node *p = head;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->next = NULL;
    p->next = ptr;

    return head;
}

Node *InsertionNodeAfterNode(Node *head, Node *preNode, int data)
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
    int choice;
    int index;
    int value;
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
    fourth->next = NULL;

    printf("Which Action Do You Wish To Perform?\n");
    printf("Press:\n1 - Inserting Node At the Beggining\n2 - Inserting Node At Index\n3 - Inserting Node With At End\n4  - Inserting Node After Node\n");
    scanf("%d", &choice);

    printf("Before Insertion\n");
    LinkedListTraversal(head);

    switch (choice)
    {
    case 1:
        printf("Enter the value you want to enter in the Node\n");
        scanf("%d", &value);

        head = InsertionNodeAtBeggining(head, value);

        printf("After Inserting\n");
        LinkedListTraversal(head);
        break;

    case 2:
        printf("Enter the index at which you want to insert Node\n");
        scanf("%d", &index);

        printf("Enter the value you want to enter in the Node\n");
        scanf("%d", &value);

        head = InsertionNodeAtIndex(head, index, value);

        printf("After Inserting\n");
        LinkedListTraversal(head);
        break;

    case 3:
        printf("Enter the value you want to enter in the end Node\n");
        scanf("%d", &value);

        head = InsertionNodeAtEnd(head, value);

        printf("After Inserting\n");
        LinkedListTraversal(head);
        break;

    case 4:
        printf("Enter the value you want to enter in the Node\n");
        scanf("%d", &value);
        head = InsertionNodeAfterNode(head, second, value);

        printf("After Deletion\n");
        LinkedListTraversal(head);
        break;

    default:
        printf("Wrong Input\n");
        break;
    }

    return 0;
}