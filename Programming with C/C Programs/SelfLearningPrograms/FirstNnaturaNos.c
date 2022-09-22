#include<stdio.h>
int main()
{
    int n, i= 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    if(i!=n && n>0)
    {
    do
    {
        printf("The number is %d\n", i+1);
        i++;
    }
    while(i<n);
    }
    else if(n==0) 
    {
    printf("The number entered is equal to 0");
    }
    else
    {
        printf("Invalid input");
    }
    
    return 0;
}