#include <stdio.h>
double fact(double num);
double factP(double num, double *factorial);
void main()
{
    double num = 0, factorial = 1;
    char choice = '0';
    printf("You want to work with Loops or Recursion or Pointers?\nPress:\nL for Loops\nR for Recursion\nP for Pointer/Function Recursion\n");
    scanf("%c",&choice);
    printf("Enter the number you want to calculate the factorial of\n");
    scanf("%lf", &num);
    if (choice == 'L' || choice=='l')
    {
        for(int counter=1;counter<=num;counter++)
        {
            factorial=factorial*counter;
        }
        printf("%.0lf! = %.0lf",num,factorial);
    }
    else if(choice=='R'||choice=='r')
    {
        factorial = fact(num);
        printf("%.0lf! = %.0lf",num,factorial);
    }
    else if(choice=='P'||choice=='p')
    {
        factP(num,&factorial);
        printf("%.0lf! = %.0lf",num,factorial);
    }
    else
    printf("Invalid input");
}
double fact(double num)
{
    if(num == 1)
    return num;
    else 
    return num * fact(num-1);
}
double factP(double num, double *factorial)
{
    int counter;
    *factorial = 1;
    for (counter = 1; counter <= num; counter++)
        *factorial = *factorial * counter;
}