#include<stdio.h>
int main()
{
    int Search,Size,Counter,Found=0;
    printf("Enter the size of the array: ");
    scanf("%d",&Size);
    int array[Size];
    for(Counter=1;Counter<=Size;Counter++)
    {
        printf("Enter the elements number %d\t",Counter);
        scanf("%d",&array[Counter]);
    }
    printf("Enter the element you want to search in the array\t");
    scanf("%d",&Search);
    for(Counter=0;Counter<=Size;Counter++)
    {
        if(array[Counter] == Search)
        {
        printf("Yes the element is present in the array\n");
        Found=1;
        }
    }
    if(Found==0)
    printf("The element was not found in the array");
    return 0;
}