#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *addNodeAtEnd(Node *head, int noOfNodeAdd);
void copyAndPrintLinkedList(Node *head);
void traversal(Node *head);

void traversal(Node *head)
{
    Node *p = head;
    int counter = 0;

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
        counter++;
    }
    printf("\n\n");
}

Node *addNodeAtEnd(Node *head, int noOfNodeAdd)
{
    int data;
    for (int counter = 0; counter < noOfNodeAdd; counter++)
    {
        Node *ptr;
        Node *p = head;
        ptr = (Node *)malloc(sizeof(Node));
        printf("Enter the data you want to store in the node\n");
        scanf("%d", &data);

        ptr->data = data;
        while (p->next != NULL)
        {
            p = p->next;
        }
        ptr->next = p->next;
        p->next = ptr;
    }
    return head;
}

void copyAndPrintLinkedList(Node *head)
{
    Node *head_copy;
    Node *ptr;
    Node *p = head;
    Node *p_copy = head_copy;

    head_copy = (Node *)malloc(sizeof(Node));

    head_copy->data = head->data;
    head_copy->next = NULL;

    p = p->next;

    while (p != NULL)
    {
        ptr = (Node *)malloc(sizeof(Node));
        p_copy = head_copy;

        while (p_copy->next != NULL)
        {
            p_copy = p_copy->next;
        }
        ptr->data = p->data;
        ptr->next = p_copy->next;
        p_copy->next = ptr;
        p = p->next;
    }
    traversal(head_copy);
    printf("%d ",counter);
}

int main()
{
    int data;
    int noOfNodeAdd;
    int sizeOfLinkedList;

    Node *head;
    head = (Node *)malloc(sizeof(Node));

    printf("Enter the data you want to store in the head node: \n");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    printf("How many nodes do you want to add?\n");
    scanf("%d", &noOfNodeAdd);

    head = addNodeAtEnd(head, noOfNodeAdd);
    traversal(head);
    copyAndPrintLinkedList(head);
    return 0;
}