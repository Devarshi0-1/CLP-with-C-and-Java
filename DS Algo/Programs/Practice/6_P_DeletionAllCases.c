#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void traversal(Node *ptr)
{
    int counter = 0;
    while (ptr != NULL)
    {
        printf("Element %d: %d\n", counter, ptr->data);
        ptr = ptr->next;
        counter++;
    }
    printf("\n");
}

Node *deletionNodeAtBeggining(Node *head)
{
    Node *ptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr = head->next;
    return ptr;
}

Node *deletionNodeAtIndex(Node *head, int index)
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

Node *deletionNodeWithAKeyValue(Node *head, int value)
{
    Node *p = head;
    Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

Node *deletionNodeAtEnd(Node *head)
{
    Node *p = head;
    Node *q = head->next;

    while (q->next != NULL)
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
    printf("Press:\n1 - Deletion Node At the Beggining\n2 - Deletion Node At Index\n3 - Deletion Node With A Key\n4  - Deletion Node At End\n");
    scanf("%d", &choice);
    printf("Before Deletion\n");
    traversal(head);
    switch (choice)
    {
    case 1:
        head = deletionNodeAtBeggining(head);
        printf("After Deletion\n");
        traversal(head);
        break;

    case 2:
        printf("Enter the index at which you want to delete Node\n");
        scanf("%d", &index);
        head = deletionNodeAtIndex(head, index);
        printf("After Deletion\n");
        traversal(head);
        break;

    case 3:
        printf("Enter the value of which you want to delete a Node\n");
        scanf("%d", &value);
        head = deletionNodeWithAKeyValue(head, value);
        printf("After Deletion\n");
        traversal(head);
        break;

    case 4:
        head = deletionNodeAtEnd(head);
        printf("After Deletion\n");
        traversal(head);
        break;

    default:
        printf("Wrong Input\n");
        break;
    }

    return 0;
}