#include<stdio.h>
int main()
{
    int number1=100,number2=101,*pointer1=&number1,*pointer2=&number2;
    printf("The adress of 100 is: %u\n",pointer1);
    printf("The address of 101 is: %u\n",pointer2);
    printf("The new value of pointer after ++pointer1 is: %u\n",++pointer1);
    printf("The new value of pointer after ++pointer2 is: %u\n",++pointer2);
    printf("The new value of pointer after pointer1+1 is: %u\n",pointer1+1);
    printf("The new value of pointer after pointer2+1 is: %u\n",pointer2+1);
    printf("The difference between the addresses of 100 and 101 is: %u\n",pointer1-pointer2);
    pointer2=pointer2+1;
    printf("The value of pointer1 is: %u\n",pointer1);
    printf("The value of pointer2+1 is: %u\n",pointer2);
    if(*pointer1==*pointer2)
    printf("Yes");
    return 0;
}