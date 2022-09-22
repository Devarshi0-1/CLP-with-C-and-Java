#include<stdio.h>
void suav(float *num,float *num2,float *sum,float *avg);
void main()
{
    float num,num2,sum=0,avg=0;
    printf("Enter 2 numbers:\n");
    scanf("%f\t%f",&num,&num2);
    suav(&num,&num2,&sum,&avg);
    printf("%.2f + %.2f = %.2f\nAverage of %.2f and %.2f is %.2f\n",num,num2,sum,num,num2,avg);
}
void suav(float *num,float *num2,float *sum,float *avg)
{
    *sum = *num + *num2;
    *avg =(*sum)/2;
}
