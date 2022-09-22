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
    Node *headFirst;
    Node *second;
    Node *third;
    Node *fourthEnd;

    headFirst = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourthEnd = (Node *)malloc(sizeof(Node));

    headFirst->pre = fourthEnd;
    headFirst->data = 1;
    headFirst->next = second;

    second->pre = headFirst;
    second->data = 2;
    second->next = third;

    third->pre = second;
    third->data = 3;
    third->next = fourthEnd;

    fourthEnd->pre = third;
    fourthEnd->data = 4;
    fourthEnd->next = headFirst;

    return 0;
}