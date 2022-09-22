#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int size;
    int top;
    int *arr;
} Stack;

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

void push(Stack *ptr, int data)
{
    if (isFull(ptr))
        printf("Error! Stack Overflow\n");
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

int pop(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Error! Stack Underflow\n");
        return -1;
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int main()
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->top = -1;
    s->size = 5;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 20);
    printf("%d ", pop(s));
    return 0;
}