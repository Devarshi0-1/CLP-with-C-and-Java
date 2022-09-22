#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
} Node;

Node *addNodesInDoublyLinkedList(Node *head);
void CopyOriginalLinkedListInASecondLinkedListInReverseOrder(Node *end);

void DoublyLinkedListTraversalAndPrint(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

Node *addNodesInDoublyLinkedList(Node *head)
{
    Node *ptr;
    int counter = 0;
    int numberOfNodes;
    int data;
    printf("How many nodes do you want to add?\n");
    scanf("%d", &numberOfNodes);

    while (counter < numberOfNodes)
    {
        ptr = (Node *)malloc(sizeof(Node));
        Node *p = head;
        printf("Enter the data you want to store in the node: \n");
        scanf("%d", &data);
        while (p->next != NULL)
        {
            p = p->next;
        }
        ptr->data = data;
        ptr->next = p->next;
        p->next = ptr;
        ptr->pre = p;
        counter++;
    }
    return ptr;
}

void CopyOriginalLinkedListInASecondLinkedListInReverseOrder(Node *end)
{
    int counter = 0;
    Node *head_copy;
    Node *test = NULL;
    Node *ptr;
    Node *p = end;
    Node *p_copy = head_copy;
    head_copy = (Node *)malloc(sizeof(Node));

    head_copy->pre = NULL;
    head_copy->data = p->data;
    head_copy->next = NULL;
    counter++;
    p = p->pre;
    while (p != NULL)
    {
        counter++;
        p_copy = head_copy;
        ptr = (Node *)malloc(sizeof(Node));
        ptr->data = p->data;
        while (p_copy->next != NULL)
        {
            p_copy = p_copy->next;
        }
        ptr->next = p_copy->next;
        ptr->pre = p_copy;
        p_copy->next = ptr;
        p = p->pre;
    }
    DoublyLinkedListTraversalAndPrint(head_copy);
}

int main()
{
    int data;
    Node *head;
    Node *end;
    head = (Node *)malloc(sizeof(Node));
    end = (Node *)malloc(sizeof(Node));

    printf("Enter the data you want to enter in the head node\n");
    scanf("%d", &data);

    head->pre = NULL;
    head->data = data;
    head->next = NULL;

    end = addNodesInDoublyLinkedList(head);
    DoublyLinkedListTraversalAndPrint(head);
    CopyOriginalLinkedListInASecondLinkedListInReverseOrder(end);

    return 0;
}