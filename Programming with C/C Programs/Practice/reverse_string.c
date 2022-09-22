#include<stdio.h>
#include<string.h>
void main()
{
    int size;
    printf("Enter the size of the string\n");
    scanf("%d",&size);
    fflush(stdin);
    char str[size];
    printf("Enter the string\n");
    gets(str);
    for(int counter=size;counter>=0;counter--)
    {
        printf("%c",str[counter]);
    }
    printf("\n");
    printf(strupr(str));
}