#include <stdio.h>
int main()
{
    FILE *ptr;
    int num, result,length;
    ptr = fopen("file_io_table.txt", "w");
    printf("Enter a number you want to print a table of in the text file\n");
    scanf("%d", &num);
    printf("Enter the length of the table\n");
    scanf("%d", &length);
    for (int counter = 0; counter < length; counter++)
    {
        result = num * (counter + 1);
        fprintf(ptr, "%d X %d = %d\n", num, counter + 1, result);
    }
    fclose(ptr);
    return 0;
}