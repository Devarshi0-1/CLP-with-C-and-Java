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

Node *deleteNodeAtBeggining(Node *head)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr = head->next;
    free(head);
    return ptr;
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
    fourth->next = NULL;

    printf("Before Deletion\n");
    traversal(head);

    head = deleteNodeAtBeggining(head);

    printf("After Deletion\n");
    traversal(head);
    return 0;
}