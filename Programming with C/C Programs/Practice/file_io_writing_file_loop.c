#include <stdio.h>
int main()
{
    char text[100];
    int count;
    FILE *ptr;
    ptr = fopen("file_io_writing_file_loop.txt", "w");
    printf("Enter the string you want to print\n");
    // fflush(stdin);
    gets(text);
    printf("How many times do you want to enter this string in the text file?\n");
    scanf("%d", &count);
    for (int counter = 1; counter <= count; counter++)
    {
        fprintf(ptr,"%s\n", &text);
    }
    fclose(ptr);
    printf("Task done; please check the file to see the results\n");
    return 0;
}