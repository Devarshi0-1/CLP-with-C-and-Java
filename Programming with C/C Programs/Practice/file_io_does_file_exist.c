#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("file_io_does_file_exist.txt","r");
    if(ptr == NULL)
    {
        printf("The file does not exit");
    }
    else
    {
        int num;
        fscanf(ptr,"%d",&num);
        fclose(ptr);
        printf("The file does exit");
        printf("\nThe value of num is %d",num);
    }
    return 0;
}