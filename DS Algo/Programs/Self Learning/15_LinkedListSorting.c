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

void swap(int *ptr, int *ptr2)
{
    int temp;
    temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
}

void sortList(Node *head)
{
    Node *ptr;
    ptr = head;
    Node *ptr2;
    while (ptr->next != NULL)
    {
        ptr2 = ptr->next;
        while (ptr2 != NULL)
        {
            if (ptr->data > ptr2->data)
            {
                swap(&ptr->data, &ptr2->data);
            }
            ptr2 = ptr2->next;
        }
        ptr = ptr->next;
    }
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

    head->data = 3;
    head->next = second;
    second->data = 1;
    second->next = third;
    third->data = 2;
    third->next = fourth;
    fourth->data = 0;
    fourth->next = NULL;

    LinkedListTraversal(head);
    sortList(head);
    LinkedListTraversal(head);
    return 0;
}