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

Node *deletionNodeWithKey(Node *head, int value)
{
    Node *p = head;
    Node *q = head->next;

    while (q->data != value && q != NULL)
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

int main()
{
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

    printf("Before Deletion\n");
    traversal(head);

    printf("Enter the value of which you want to delete the Node\n");
    scanf("%d", &value);

    head = deletionNodeWithKey(head, value);

    printf("After Deletion\n");
    traversal(head);

    return 0;
}