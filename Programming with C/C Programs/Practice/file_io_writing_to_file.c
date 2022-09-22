#include <stdio.h>
int main()
{
    FILE *ptr;
    int num=54;
    ptr = fopen("file_io_writing_to_file.txt", "w");
    fprintf(ptr,"Value of num is: %d\n",num);
    fprintf(ptr,"This was the fprinf command, Thank You\n");
    fclose(ptr);
    return 0;
}