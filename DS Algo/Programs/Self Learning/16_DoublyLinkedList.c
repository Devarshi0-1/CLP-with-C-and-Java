#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
} Node;

int main()
{
    int inserting;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->pre = NULL;
    head->data = 1;
    head->next = second;

    second->pre = head;
    second->data = 2;
    second->next = third;

    third->pre = second;
    third->data = 3;
    third->next = fourth;

    fourth->pre = third;
    fourth->data = 4;
    fourth->next = NULL;

    return 0;
}