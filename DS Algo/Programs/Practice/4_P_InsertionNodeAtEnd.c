#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
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

struct Node *insertionAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{
    int insertion;
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

    printf("Enter the value you want to insert at the end\n");
    scanf("%d", &insertion);
    head = insertionAtEnd(head, insertion);

    printf("List after insertion\n");
    traversal(head);
    return 0;
}