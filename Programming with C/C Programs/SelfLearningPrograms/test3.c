#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *nextNode;
};

void LinkedListTraversal(struct node *ptr);

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->value = 5;
    head->nextNode = second;

    second->value = 10;
    second->nextNode = third;

    third->value = 15;
    third->nextNode = fourth;

    fourth->value = 20;
    fourth->nextNode = NULL;
    LinkedListTraversal(head);
    return 0;
}

void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element = %d\n", ptr->value);
        ptr = ptr->nextNode;
    }
}