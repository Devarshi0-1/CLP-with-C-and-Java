#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int size;
    int top;
    int *arr;
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
    int counter = 0;
    int data;
    while (counter < additions)
    {
        printf("Enter the element you want to add\n");
        scanf("%d", &data);
        if (isFull(ptr))
            printf("Error! Stack Overflow\nElement %d was not added in the Stack\n", data);
        else
        {
            ptr->top++;
            ptr->arr[ptr->top] = data;
        }
        counter++;
    }
}

int main()
{
    int size;
    int noOfAdditions;

    stack *s = (stack *)malloc(sizeof(stack));
    s->top = -1;
    printf("Enter the size of the Stack Array\n");
    scanf("%d", &size);
    s->size = size;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("How many Elements do you want to add in the Stack?\n");
    scanf("%d", &noOfAdditions);

    push(s, noOfAdditions);

    return 0;
}