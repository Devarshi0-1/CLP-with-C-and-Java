#include<stdio.h>
int main()
{
int num;
printf("Enter the number you want to test the divisibility for:\n");
scanf("%d", &num);
printf("Divisibility test returns %d", num%97);
return 0;
}