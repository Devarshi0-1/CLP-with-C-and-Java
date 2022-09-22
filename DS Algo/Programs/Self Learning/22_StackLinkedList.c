#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node;

void LinkedListTraversal(node *p)
{
    while (p != NULL)
    {
        printf("Element: %d\n", p->data);
        p = p->next;
    }
}

int isEmpty(node *top)
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

int isFull(node *top)
{
    node *p = (node *)malloc(sizeof(node));
    if (p == NULL)
        return 1;
    else
        return 0;
}

node *push(node *top, int num)
{
    if (isFull(top))
        printf("Stack Overflow!\n");
    else
    {
        node *new = (node *)malloc(sizeof(node));
        new->data = num;
        new->next = top;
        top = new;
        return top;
    }
}

int main()
{
    node *top = NULL;

    return 0;
}