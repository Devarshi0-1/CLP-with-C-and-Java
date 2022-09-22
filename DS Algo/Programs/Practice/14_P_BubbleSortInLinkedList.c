#include <stdio.h>
#include <stdlib.h>

// Defining Structure Node
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// All the Functions used in the program apart from "main"
int sizeOfLinkedList(Node *head);
void swap(int *ptr, int *ptr2);
Node *BubbleSortLinkedList(Node *head);
void LinkedListTraversal(Node *ptr);
Node *addNodeAtEnd(Node *head, int noOfNodes);

// Function to determine the size of the linked list
int sizeOfLinkedList(Node *head)
{
    Node *p = head;
    int counter = 0;
    while (p != NULL)
    {
        p = p->next;
        counter++;
    }
    return counter;
}

// Function to swap the integer values
void swap(int *ptr, int *ptr2)
{
    int temp;
    temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
}

// Function to traverse and print the linked list
void LinkedListTraversal(Node *ptr)
{
    printf("List -> ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n\n");
}

// Function to add Node(s) at the end of the linked list
Node *addNodeAtEnd(Node *head, int noOfNodes)
{
    int num;
    for (int counter = 0; counter < noOfNodes; counter++)
    {
        printf("Enter the Numeric value you want to store in the Node\n");
        scanf("%d", &num);

        Node *ptr;
        Node *p = head;

        ptr = (Node *)malloc(sizeof(Node));
        ptr->data = num;

        while (p->next != NULL)
        {
            p = p->next;
        }

        ptr->next = p->next;
        p->next = ptr;
    }
    return head;
}

// Function to implement bubble sort in singly linked list
Node *BubbleSortLinkedList(Node *head)
{
    int size = sizeOfLinkedList(head);
    Node *p;
    Node *q;

    for (int counter = 0; counter < size - 1; counter++)
    {
        p = head;
        q = head->next;
        for (int counter2 = 0; counter2 < (size - 1 - counter); counter2++)
        {
            if (p->data > q->data)
                swap(&p->data, &q->data);
            p = p->next;
            q = q->next;
        }
    }
    return head;
}

int main()
{
    int num;
    int numberOfNodes;
    Node *head;

    // Allocating memory for the head node
    head = (Node *)malloc(sizeof(Node));

    printf("Enter the Numeric value you want to store in the head element?\n");
    scanf("%d", &num);

    head->data = num;
    head->next = NULL;

    printf("How many Nodes do you want to add?\n");
    scanf("%d", &numberOfNodes);

    head = addNodeAtEnd(head, numberOfNodes);

    printf("List Before Sorting\n");
    LinkedListTraversal(head);

    head = BubbleSortLinkedList(head);

    printf("List After Sorting\n");
    LinkedListTraversal(head);

    return 0;
}