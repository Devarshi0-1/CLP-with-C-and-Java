#include <stdio.h>
#include <conio.h>
void reverse_array();
int main()
{
    char choice;
    printf("Do you want to copy and print reverse of an array?\n");
    printf("Type 1 for Yes and 0 for No\n");
    choice = getch();
    if (choice == '1')
    {
        reverse_array();
    }
    else if (choice == '0')
        printf("Program terminated\n");
    return 0;
}

void reverse_array()
{
    int size, counter, counter2;
    printf("The size of the Array\n");
    scanf("%d", &size);
    int array[size];
    int reverse_array[size];
    printf("Enter the contents of the Array\n");
    for (counter = 0; counter < size; counter++)
    {
        scanf("%d", &array[counter]);
    }
    for (counter = 0, counter2 = size - 1; counter < size; counter++, counter2--)
    {
        reverse_array[counter] = array[counter2];
    }
    for (counter = 0; counter < size; counter++)
    {
        printf("%d\t", reverse_array[counter]);
    }
}
