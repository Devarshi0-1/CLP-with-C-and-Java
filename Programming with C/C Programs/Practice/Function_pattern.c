#include<stdio.h>
int pattern(int s);
int main()
{
    int length;
    printf("Enter the length of the programm\n");
    scanf("%d",&length);
    for(int counter=0;counter<length;counter++)
    {
        printf("%c",pattern(counter));
    }   
}
int pattern(int s)
{
    if(s==1)
    return '*';
    else
    return ;
}