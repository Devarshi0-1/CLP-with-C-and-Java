#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number= rand()%100 + 1;
    do
    {
        printf("Guess a number between 1-100\n");
        scanf("%d",&guess);
        if(number<guess)
        {
            printf("The number is lower than that\n");
        }
        else if(number>guess)
        {
            printf("The number is higher than that\n");
        }
        else
        {
            printf("You gussed it right and took %d tries\n",nguesses);
        }
        nguesses++;
        }
        while(number!=guess);
        return 0;
    }
