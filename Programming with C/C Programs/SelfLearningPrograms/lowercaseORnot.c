#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter the Character \n");
    scanf("%c", &alphabet);
    if(alphabet>=97 && alphabet<=122)
    {
        printf("The Character entered is lower case\n");
    }
    else
    {
        printf("The Charactered entered is not lower case\n");
    }
    return 0;
    
}