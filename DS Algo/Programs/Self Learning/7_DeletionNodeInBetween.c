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

Node *deleteNodeAtIndex(Node *head, int index)
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

int main()
{
    int index;
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

    printf("Enter the index at which you want to delete the Node\n");
    scanf("%d", &index);

    head = deleteNodeAtIndex(head, 2);

    printf("After Deletion\n");
    traversal(head);
    return 0;
}