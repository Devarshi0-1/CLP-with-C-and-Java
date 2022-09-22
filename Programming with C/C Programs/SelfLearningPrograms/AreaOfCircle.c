#include<stdio.h>
int main()
{
    float radius;
    float pi = 3.14;
    printf("Enter the radius of you Circle\n");
    scanf("%f", &radius);
    printf("The area of your Circle is %f\n", radius*radius*pi );
    return 0;
}