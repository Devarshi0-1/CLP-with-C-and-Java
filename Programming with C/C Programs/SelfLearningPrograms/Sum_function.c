#include<stdio.h>
float sum(float a,float b); 
int main()
{
    float result;
    result=sum(10.22,5.44);
    printf("The sum of 10.22 and 5.44 according to the function is: %f",sum(10.22,5.44));
    return 0;
}
float sum(float a,float b)
{
    float result; //This float result is completely diffeent from the float result declared in the main function
    result=a+b;
    return result;
}