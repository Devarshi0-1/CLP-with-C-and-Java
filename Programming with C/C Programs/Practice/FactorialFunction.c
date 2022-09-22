#include<stdio.h>
double factorial(double fact);
int main()
{
    double f;
    printf("Enter the number you want to see the factorial of:\n");
    scanf("%lf",&f);
    printf("%.0lf! = %.0lf",f,factorial(f));
    return 0;
}
double factorial(double fact)
{
    if (fact==1 || fact==0)
    return 1;
    else 
    return (fact * factorial(fact-1));
}