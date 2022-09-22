#include <stdio.h>
int main()
{
    char c;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("file_io_copy_paste1.txt", "r");
    ptr2 = fopen("file_io_copy_paste2.txt", "w");
    c = fgetc(ptr);
    while (c != EOF)
    {
        fputc(c, ptr2);
        // fputc(c, ptr2); //To double the text word by word in the copied file 
        c = fgetc(ptr);
    }
    fprintf(ptr2, "\nThis is the copied file\n");
    fclose(ptr);
    fclose(ptr2);
    printf("The task was successfully done!\n");
    return 0;
}