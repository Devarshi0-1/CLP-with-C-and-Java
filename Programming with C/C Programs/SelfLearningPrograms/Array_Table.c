#include <stdio.h>
int main()
{
    int array[10],counter,num;
    printf("Enter the number you want the multiplication table of\n");
    scanf("%d",&num);
    for(counter=0;counter<10;counter++)
    {
        array[counter]= num*(counter+1);
    }
    printf("The table is:\n");
    for(counter=0;counter<10;counter++)
    {
        printf("%d x %d = %d\n",num,counter+1,array[counter]);
    }
return 0;
}