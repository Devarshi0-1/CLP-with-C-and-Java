#include<stdio.h>
int main()
{
    float angle,angle2,angle3;
    printf("Enter the 3 angles of the triangle in degree\n");
    scanf("%f\n%f\n%f",&angle,&angle2,&angle3);
    if(angle+angle2+angle3==180)
    printf("The Triangle is valid");
    return 0;
}