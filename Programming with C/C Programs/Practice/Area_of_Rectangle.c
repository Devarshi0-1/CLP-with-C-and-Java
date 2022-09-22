#include<stdio.h>
int main()
{
    float length,width,area;
    printf("Enter the length and width of the rectangle\n");
    scanf("%f\n%f",&length,&width);
    area=length*width;
    printf("The area of the rectangle is %f",area);
    return 0;
}