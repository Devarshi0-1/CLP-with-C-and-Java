#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
} queue;

int isFull(queue *q)
{
    if (q->r == q->size - 1)
        return 1;
    else
        return 0;
}

int isEmpty(queue *q)
{
    if (q->r == q->f)
        return 1;
    else
        return 0;
}

void enQueue(queue *q, int value)
{
    if(isFull(q))
        printf("Errro! Queue Full!");
    else
    {
        q->r++;
        q->arr[q->r] = value;
        printf("%d was EnQueued\n", q->arr[q->r]);
    }
}

int deQueue(queue *q)
{
    int a = -1;
    if(isEmpty(q))
        printf("Error! Queue Empty\n");
    else
    {
        q->f++;
        a = q->arr[q->f];
        printf("%d was DeQueued\n", q->arr[q->f]);
    }
    return a;
}

int main()
{
    int size, data, noOfItemsPush;
    queue *q = (queue *)malloc(sizeof(queue));
    q->f = -1;
    q->r = -1;

    printf("Enter the size of the array\n");
    scanf("%d", &size);

    printf("Enter the number of Items you want to push in the Queue\n");
    scanf("%d", &noOfItemsPush);

    q->arr = (int *)malloc(sizeof(int) * size);
    for (int counter = 0; counter < noOfItemsPush; counter++)
    {
        printf("Enter the value you want to Enqueue\n");
        scanf("%d", &data);
        enQueue(q, data);
    }
    int a = deQueue(q);

    return 0;
}