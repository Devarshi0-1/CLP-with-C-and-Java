#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    for (int counter = 0; ptr != NULL; counter++)
    {
        printf("Element %d: %d\n", counter, ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct Node *insertionAtBeggining(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    printf("List before insertion\n");
    traversal(head);

    head = insertionAtBeggining(head, 0);

    printf("List after insertion\n");
    traversal(head);
    return 0;
}