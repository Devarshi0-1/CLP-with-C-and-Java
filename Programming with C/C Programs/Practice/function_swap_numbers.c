#include<stdio.h>
void swap(int *num,int *num1);
int main()
{
    int num,num1;
    printf("Enter the 2 numbers you want to swap:\n");
    scanf("%d\t%d",&num,&num1);
    swap(&num,&num1);
    return 0;
}
void swap(int *num,int *num1)
{
    int temp;
    temp = *num; 
    *num = *num1;
    *num1 = temp;
    printf("The swapped numbers are 1st = %d\n2nd = %d",*num,*num1);
}