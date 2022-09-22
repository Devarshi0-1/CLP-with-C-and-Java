#include<stdio.h>
int main()
{
    int Counter,Counter2,Continous_Num=0,Stares;
    printf("Enter the length of the pattern\n");
    scanf("%d",&Stares);
    for(Counter=1;Counter<=Stares;Counter++)
    {
        for(Counter2=1;Counter2<=Counter;Counter2++)
        {
            Continous_Num++;
            printf(" %d",Continous_Num);
        }
        printf("\n");
    }
    return 0;
}