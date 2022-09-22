#include <stdio.h>
int main()
{
    char text[100];
    int count, choice;
    FILE *ptr;
    printf("For writing in the file press '0'\nFor appending anything to the file press '1'\n");
    scanf("%d", &choice);
    if (choice == 0)
    {
        ptr = fopen("file_io_write_or_append.txt", "w");
        printf("Enter the string you want to print\n");
        fflush(stdin);
        gets(text);
        printf("How many times do you want to enter this string in the text file?\n");
        scanf("%d", &count);
        for (int counter = 1; counter <= count; counter++)
        {
            fprintf(ptr, "%s\n", &text);
        }
        fclose(ptr);
        printf("Task done; please check the file to see the results\n");
    }
    else if (choice == 1)
    {
        ptr = fopen("file_io_write_or_append.txt", "a");
        printf("Enter the string you want to append\n");
        fflush(stdin);
        gets(text);
        printf("How many times do you want to enter this string in the text file?\n");
        scanf("%d", &count);
        for (int counter = 1; counter <= count; counter++)
        {
            fprintf(ptr, "%s\n", &text);
        }
        fclose(ptr);
        printf("Task done; please check the file to see the results\n");
    }
    return 0;
}