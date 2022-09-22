#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int size;
    int top;
    int *arr;
} Stack;

int isEmpty(Stack *ptr);
int isFull(Stack *ptr);

int isEmpty(Stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

int isFull(Stack *ptr)
{
    if (ptr->top == (ptr->size - 1))
        return 1;
    else
        return 0;
}

int main()
{
    Stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // s->arr[0] = 7;
    // s->top++;

    if (isEmpty(s))
        printf("Stack is Empty\n");
    else
        printf("Stack Is Not Empty\n");

    if (isFull(s))
        printf("Stack is Full\n");
    else
        printf("Stack is not Full\n");

    return 0;
}