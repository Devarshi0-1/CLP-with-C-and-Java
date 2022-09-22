#include<stdio.h>
double factorial(double fact);
int main()
{
    double Num;
    printf("Enter the number you want the factorial of\n");
    scanf("%lf",&Num);
    printf("The factorial of the %lf is: %lf",Num,factorial(Num));
    return 0;
}
double factorial(double fact)
{
    printf("Calling Factorial(%lf)\n",fact);
    if(fact==0 || fact==1)
    return 1;
    else
    {
        return fact * factorial(fact-1);
    }
    
}