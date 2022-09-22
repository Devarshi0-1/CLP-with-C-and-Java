#include<stdio.h>
int main()
{
    float radius;
    float pi = 3.14;
    float height;
    printf("Enter the radius of you Cyliner\n");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder ");
    scanf("%f", &height);
    printf("The volume of the cylinder is %f\n", radius*radius*pi*height);
    return 0;
}