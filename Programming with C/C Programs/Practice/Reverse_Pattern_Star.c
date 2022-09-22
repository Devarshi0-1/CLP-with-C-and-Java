#include<stdio.h>
int main()
{
    int counter,counter2,stairs;
    printf("Enter the length of the pattern: ");
    scanf("%d",&stairs);
    for(counter=1;counter<=stairs;counter++)
    {
        for(counter2=stairs;counter2>=counter;counter2--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}