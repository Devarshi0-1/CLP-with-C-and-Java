#include<stdio.h>
int main()
{
    float celsius , farhenheit;
    printf("Enter the temperature in celsius\n");
    scanf("%f", &celsius);
    printf("Temperature in Farhenheit is %f", celsius * 9/5 + 32 );
    return 0;
}