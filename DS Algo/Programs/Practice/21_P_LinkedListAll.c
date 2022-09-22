#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *nextNode;
} Node;

void LinkedListTraversal(Node *ptr)
{
    int counter = 1;
    while (ptr != NULL)
    {
        printf("Node %d: %d\n", counter, ptr->data);
        ptr = ptr->nextNode;
        counter++;
    }
}

Node *InsertionAtTheBeggining(Node *head)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->nextNode = head;
    printf("Enter the data for the Beggining Node: ");
    scanf("%d", &ptr->data);
    return ptr;
}

Node *InsertionAtAnIndex(Node *head)
{
    int counter = 0, index;

    Node *ptr = (Node *)malloc(sizeof(Node));
    Node *p = head;

    printf("Enter the Index: ");
    scanf("%d", &index);

    printf("Enter the Node data: ");
    scanf("%d", &ptr->data);

    while (counter != index - 1)
    {
        p = p->nextNode;
        counter++;
    }

    ptr->nextNode = p->nextNode;
    p->nextNode = ptr;

    return head;
}

Node *InsertionAtTheEnd(Node *head)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    Node *p = head;
    printf("Enter the data for the last node: ");
    scanf("%d", &ptr->data);
    ptr->nextNode = NULL;

    while (p->nextNode != NULL)
        p = p->nextNode;
    p->nextNode = ptr;
    return head;
}

Node *DeletionAtTheBeggining(Node *head)
{
    Node *ptr = head;
    head = head->nextNode;

    free(ptr);

    return head;
}

Node *DeletionOfAnIndex(Node *head)
{
    int counter = 0, index;
    Node *p = head;
    Node *q = head->nextNode;

    printf("Enter the Index of Deleting Node: ");
    scanf("%d", &index);

    while (counter != index - 1)
    {
        p = p->nextNode;
        q = q->nextNode;
        counter++;
    }

    p->nextNode = q->nextNode;
    free(p);
    free(q);

    return head;
}

Node *DeletionAtEnd(Node *head)
{
    Node *ptr = head;

    while (ptr->nextNode->nextNode != NULL)
        ptr = ptr->nextNode;
    ptr->nextNode = NULL;

    return head;
}

Node *addNode(Node *head)
{
    int choice;
    int correctChoice = 1;

    printf("Do you want to Add a Node\n-> In the Beggining(1)\n-> At an Index(2)\n-> At the End(3): \n");
    scanf("%d", &choice);

    do
    {
        switch (choice)
        {
        case 1:
            head = InsertionAtTheBeggining(head);
            correctChoice = 0;
            break;

        case 2:
            head = InsertionAtAnIndex(head);
            correctChoice = 0;
            break;

        case 3:
            head = InsertionAtTheEnd(head);
            correctChoice = 0;
            break;

        default:
            printf("Wrong Input\n");
            break;
        }
    } while (correctChoice);

    return head;
}

Node *deleteNode(Node *head)
{
    int choice;
    int correctChoice = 1;
    printf("Do you want to Delete\n-> At the Beggining(1)\n-> Of an Index(2)\n-> At the End(3):\n");
    scanf("%d", &choice);

    do
    {
        switch (choice)
        {
        case 1:
            head = DeletionAtTheBeggining(head);
            correctChoice = 0;
            break;

        case 2:
            head = DeletionOfAnIndex(head);
            correctChoice = 0;
            break;

        case 3:
            head = DeletionAtEnd(head);
            correctChoice = 0;
            break;

        default:
            printf("Wrong Input\n");
            break;
        }
    } while (correctChoice);

    return head;
}

int main()
{
    int choice;
    int CorrectChoice = 1;
    int length;

    Node *head;
    head = (Node *)(malloc(sizeof(Node)));
    head->nextNode = NULL;

    printf("Create a Linked List\nEnter number of nodes to add: ");
    scanf("%d", &length);

    printf("Enter data on the Node 1: ");
    scanf("%d", &head->data);

    for (int counter = 1; counter < length; counter++)
        head = InsertionAtTheEnd(head);
    LinkedListTraversal(head);
    do
    {
        printf("Enter your Choice\n");
        printf("-> Add A Node(1)\n-> Delete A Node(2)\n-> Terminate The Program(3)\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            CorrectChoice = 0;
            head = addNode(head);
            break;

        case 2:
            CorrectChoice = 0;
            head = deleteNode(head);
            break;

        case 3:
            CorrectChoice = 0;
            exit(0);
            break;

        default:
            printf("Wrong Input\n");
            break;
        }

    } while (CorrectChoice);

    LinkedListTraversal(head);
    return 0;
}