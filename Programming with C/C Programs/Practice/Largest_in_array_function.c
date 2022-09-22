#include <stdio.h>
void calc(int *array,int size);
int main()
{
    int size,counter;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array\n");
    for(counter=0;counter<size;counter++)
    {
        scanf("%d",&array[counter]);
    }
    calc(array,size);
    return 0;
}
void calc(int *array , int size)
{
    int max=array[0];
    for(int counter=1;counter<size;counter++)
    {
        if(max < array[counter])
        {
            max = array[counter];
        }
    }
    printf("Maximum element = %d",max);
}