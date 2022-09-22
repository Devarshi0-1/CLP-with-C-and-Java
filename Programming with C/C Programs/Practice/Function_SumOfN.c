#include<stdio.h>
double summ(double s);
int main()
{
    double sum;
    printf("Of how many natural numbers you want to see the sum of?\n");
    scanf("%lf",&sum);
    printf("The sum of %.0lf natural numbers is %.0lf",sum,summ(sum));
    return 0;
}
double summ(double s)
{
    if (s==0)
    return 0;
    else
    return s+summ(s-1);
}