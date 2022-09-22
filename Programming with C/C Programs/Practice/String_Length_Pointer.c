#include <stdio.h>
int calculateLength(char *ch);
void main()
{
    char str1[100];
    int length;
    printf("\n\nPointer : Calculate the length of the string :\n");
    printf("---------------------------------------------------\n");
    printf(" Input a string : ");
    fgets(str1, sizeof str1, stdin);
    length = calculateLength(str1);
    printf("The length of the given string \n%s = %d ", str1, length - 1);
    printf("\n\n");
}
int calculateLength(char *ch)
{
    int length = 0;
    while (*ch != '\0')
    {
        length++;
        ch++;
    }
    return length;
}