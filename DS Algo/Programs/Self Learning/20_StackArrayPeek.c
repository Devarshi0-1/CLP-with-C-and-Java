#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int *arr;
    int size;
    int top;
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

void push(stack *ptr, int additions)
{
    int data;
    int counter = 0;

    while (counter < additions)
    {
        printf("Enter the Data you want to push in the Stack: \n");
        scanf("%d", &data);
        if (isFull(ptr))
            printf("Error! Stack Overflow!\nElement %d wasn't pushed into the Stack\n");
        else
        {
            ptr->top++;
            ptr->arr[ptr->top] = data;
        }
        counter++;
    }
}

int peek(stack *ptr, int i)
{
    int dataAccess = ((ptr->top - i) + 1);
    if (dataAccess < 0)
    {
        printf("Not a valid position\n");
        return -1;
    }
    else
        return ptr->arr[dataAccess];
}

int main()
{
    int size;
    int access;
    int noOfAdditions;
    int peekElement;
    stack *s = (stack *)malloc(sizeof(stack));

    s->top = -1;

    printf("Enter the size of the stack\n");
    scanf("%d", &size);

    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("How many Elements do you want to push in the stack?\n");
    scanf("%d", &noOfAdditions);

    push(s, noOfAdditions);
    printf("%d\n", s->top);
    for (int counter = 1; counter < noOfAdditions; counter++)
    {
        peekElement = peek(s, counter);
        printf("Element %d = %d\n", counter, peekElement);
    }
    return 0;
}