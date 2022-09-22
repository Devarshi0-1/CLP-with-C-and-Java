#include <stdio.h>
#include <stdlib.h>

struct linkedList
{
    int data;
    struct linkedList *nextNode;
};

void printList(struct linkedList *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->nextNode;
    }
}

int main()
{
    struct linkedList *head;
    struct linkedList *second;
    struct linkedList *third;

    head = (struct linkedList *)malloc(sizeof(struct linkedList));
    second = (struct linkedList *)malloc(sizeof(struct linkedList));
    third = (struct linkedList *)malloc(sizeof(struct linkedList));

    head->data = 1;
    head->nextNode = second;

    second->data = 2;
    second->nextNode = third;

    third->data = 3;
    third->nextNode = NULL;

    printList(head);

    return 0;
}