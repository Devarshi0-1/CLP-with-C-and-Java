#include <stdio.h>
void count(int *array,int size);
int main()
{
    int counter,size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array:\n");
    for(counter=0;counter<size;counter++)
    {
        scanf("%d",&array[counter]);
    }
    count(array,size);
return 0;
}
void count(int *array,int size)
{
    int count_positive=0,count_negative=0,count_zero=0;
    for(int counter=0;counter<size;counter++)
    {
        if(array[counter]>0)
        count_positive=count_positive+1;
        else if(array[counter]<0)
        count_negative=count_negative+1;
        else
        count_zero=count_zero+1;
    }
    printf("+ve numbers are: %d\n",count_positive);
    printf("-ve numbers are: %d\n",count_negative);
    printf("Number of Zero in the array are: %d\n",count_zero);
}