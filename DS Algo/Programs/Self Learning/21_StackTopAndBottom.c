#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int *arr;
    int top;
    int size;
} stack;

int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

int isFull(stack *ptr)
{
    if (ptr->top == (ptr->size - 1))
        return 1;
    else
        return 0;
}

void push(stack *ptr, int noOfAdditions)
{
    int counter;
    int data;

    for (counter = 0; counter < noOfAdditions; counter++)
    {
        printf("Enter The Data You Want To Push In The Stack\n");
        scanf("%d", &data);
        if (isFull(ptr))
            printf("Stack Overfull!\nElement %d wasn't added to the Stack\n");
        else
        {
            ptr->top++;
            ptr->arr[ptr->top] = data;
        }
    }
}

int stackTop(stack *ptr)
{
    return ptr->arr[ptr->top];
}

int stackBottom(stack *ptr)
{
    return ptr->arr[0];
}

int main()
{
    int size;
    int noOfAdditions;
    stack *s = (stack *)malloc(sizeof(stack));
    s->top = -1;

    printf("Enter The Size Of The Stack Array\n");
    scanf("%d", &size);
    s->size = size;

    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("Enter The Number Of Elements You Want To Add\n");
    scanf("%d", &noOfAdditions);

    push(s, noOfAdditions);

    printf("Top Element of the Stack is = %d\n", stackTop(s));
    printf("Bottom Element of the Stack is = %d\n", stackBottom(s));

    return 0;
}