#include<stdio.h>
int main()
{
    float R , H ;
    float pi=3.14159;
    printf("Enter the value of Radius\n");
    scanf("%f" , &R);
    printf("Enter the value of Height\n");
    scanf("%f", &H);
    printf("The volume of Cone is %f", pi*R*R*(H/3));
    return 0;

}