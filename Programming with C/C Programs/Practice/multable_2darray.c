#include <stdio.h>
void printtable(int *multable, int num, int size);
int main()
{
    int size,num;
    printf("The table will be starting from 1\n");
    printf("Of how many numbers do you want to print a Multiplication table for?\n");
    scanf("%d",&num);
    printf("How long do you want your tables to be?:\n");
    scanf("%d",&size);
    int multable[num][size];
    for(int counter=0;counter<num;counter++)
    {
        printtable(multable[counter],counter+1,size);
    }
    return 0;
}

void printtable(int *multable, int num, int size)
{
    printf("The multiplication table of %d is:\n",num);
    for(int counter=0; counter<size;counter++)
    {
        multable[counter] = num*(counter+1);
    }

    for(int counter=0;counter<size;counter++)
    {
        printf("%d X %d = %d\n",num,counter+1,multable[counter]);
    }
    printf("\n**************************************\n\n");
}