#include<stdio.h>
void printadd(int NumX);
int main()
{
    int Num;
    printf("Enter a number\n");
    scanf("%d",&Num);
    printf("The value of Num is %d\n",Num);
    printf("The address of Num is %u\n",&Num);
    printadd(Num);
    return 0;
}
void printadd(int NumX)
{
    printf("The address of NumX is %u\n",&NumX);
}