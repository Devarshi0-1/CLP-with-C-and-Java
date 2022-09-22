#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Stack
{
    int size;
    int *arr;
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
    int counter;
    for (counter = 0; counter < additions; counter++)
    {
        printf("Enter the data you want to push in the stack: \n");
        scanf("%d", &data);
        if (isFull(ptr))
        {
            printf("Error! Stack Overflow\n");
            printf("Element %d was'nt pushed into the stack\n", data);
        }
        else
        {
            ptr->top++;
            ptr->arr[ptr->top] = data;
        }
    }
}

int peek(stack *ptr, int position)
{
    int index = (ptr->top - position + 1);
    if (index < 0 || isEmpty(ptr))
    {
        printf("Error! Entered position is invalid!\n");
        return INT_MIN;
    }
    else
        return ptr->arr[index];
}

int main()
{
    int size;
    int noOfAdditions;
    stack *s = (stack *)malloc(sizeof(stack));
    s->top = -1;

    printf("Enter the Size of the Stack Array\n");
    scanf("%d", &size);
    s->size = size;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("How many elements do you want to add?\n");
    scanf("%d", &noOfAdditions);
    push(s, noOfAdditions);

    for (int counter = 1; counter <=  noOfAdditions; counter++)
    {
        printf("Element %d : %d\n", counter, peek(s, counter));
    }
    return 0;
}