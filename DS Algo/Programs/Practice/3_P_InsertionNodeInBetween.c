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

struct Node *insertionAtIndex(struct Node *head, int data, int index)
{
    int counter = 0;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (counter != index - 1)
    {
        p = p->next;
        counter++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    printf("List before insertion\n");
    traversal(head);

    insertionAtIndex(head, 20020, 2);

    printf("List after insertion\n");
    traversal(head);
    return 0;
}