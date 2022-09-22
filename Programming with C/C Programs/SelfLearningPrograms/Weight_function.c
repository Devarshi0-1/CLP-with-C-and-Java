#include<stdio.h>
#define g 9.8
float weight(float M);
int main()
{
    float mass;
    printf("Enter the mass of the body in Kg(s)\n");
    scanf("%f",&mass);
    printf("The Weight of the body is %0.3f Newtons",weight(mass));
    return 0;
}
float weight(float M)
{
    float weight= M*g;
    return weight;
}