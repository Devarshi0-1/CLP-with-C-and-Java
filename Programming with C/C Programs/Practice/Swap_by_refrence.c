#include <stdio.h>
void swap(float *num,float *num2);
int main()
{
    float num,num2;
    printf("Enter two numbers\n");
    scanf("%f\t%f",&num,&num2);
    printf("Numbers before swap are\nNum = %f\nNum2 = %f\n",num,num2);
    swap(&num,&num2);
    printf("Numbers after swap are\nNum = %f\nNum2 = %f",num,num2);
    return 0;
}
void swap(float *num,float *num2)
{
    float temp;
    temp = *num;
    *num = *num2;
    *num2 = temp;
}