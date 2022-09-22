#include <stdio.h>
int main()
{
    int m = 300; float fx = 300.600006; char cht='z';
    int *ptr1; float *ptr2; char *ptr3;
    ptr1 =  &m;
    ptr2 =  &fx;
    ptr3 =  &cht;
    printf("m = %d\nfx = %f\ncht = %c\n",m,fx,cht);
    printf("address of m = %u\naddress of fx = %u\naddress of cht = %u\n",&m,&fx,&cht);    
    printf("value at address of m = %d\nvalue at address of fx = %f\nvalue at address of cht = %c\n",*(&m),*(&fx),*(&cht));
    printf("value at address of m = %d\nvalue at address of fx = %f\nvalue at address of cht = %c\n",*ptr1,*ptr2,*ptr3);
    return 0;
}