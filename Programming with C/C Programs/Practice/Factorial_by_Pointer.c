#include<stdio.h>
void FACT(int num, int *fact);
void main()
{
int fact,num;
printf("Input a number  you want to find the factorial of using pointers\n");
scanf("%d",&num);
FACT(num , &fact );
printf("Solution\n%d! = %d",num , fact);
}
void FACT(int num,int *fact)
{
int counter;
*fact= 1;
for(counter = 1 ; counter <= num ; counter++)
*fact = *fact * counter;
}