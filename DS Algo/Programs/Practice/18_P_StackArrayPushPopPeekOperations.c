#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int size;
    int top;
    int *arr;
} stack;

int isEmpty(stack *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

int isFull(stack *s)
{
    if (s->top == s->size - 1)
        return 1;
    else
        return 0;
}

void push(stack *s, int pushElement)
{
    if (isFull(s))
        printf("Error! Stack Overflow!");
    else
    {
        s->top++;
        s->arr[s->top] = pushElement;
    }
}

int pop(stack *s)
{
    int popElement;
    if (isEmpty(s))
    {
        printf("Error! Stack UnderFlow!\n");
        return -6996;
    }

    else
    {
        popElement = s->arr[s->top];
        s->top--;
        return popElement;
    }
}

int peek(stack *s, int position)
{
    int index = s->top - position + 1;
    if (isEmpty(s) || index < 0)
    {
        printf("Invalid Index!\n");
        return -404;
    }

    else
    {
        return s->arr[index];
    }
}

int main()
{
    int size, pushElement, noOfElementsPush, popElement;

    stack *s;
    s = (stack *)malloc(sizeof(stack));
    s->top = -1;

    printf("Enter the size of the array\n");
    scanf("%d", &size);

    s->size = size;
    s->arr = (int *)malloc(size * sizeof(int));

    printf("How many elements do you want to push into the stack?\n");
    scanf("%d", &noOfElementsPush);

    for (int counter = 0; counter < noOfElementsPush; counter++)
    {
        printf("Enter the element you want to push into the stack\n");
        scanf("%d", &pushElement);
        push(s, pushElement);
    }

    printf("Deleting Top The Element of the Stack....\n");
    popElement = pop(s);

    printf("The deleted element was: %d\n", popElement);

    printf("Printing the Entire Stack Array\n");
    for (int counter = 0; counter < noOfElementsPush; counter++)
    {
        printf("%d ", peek(s, counter));
    }

    return 0;
}