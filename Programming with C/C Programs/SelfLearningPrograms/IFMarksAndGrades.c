#include<stdio.h>
int main()
{
    int Physics, Chemistry, Maths;
    float total;
    printf("Enter marks in Physics\n");
    scanf("%d", &Physics);
    printf("Enter marks in Chemistry\n");
    scanf("%d", &Chemistry);
    printf("Enter marks in Maths\n");
    scanf("%d", &Maths);
    total = (Physics + Chemistry + Maths)/3 ;
    printf("Your total marks are %f\n", total);
    printf("Your percentage is %f\n" , total);
    if(total<40 || Physics<33 || Chemistry<33 || Maths<33)
    {
    printf("You are fail\n");
    }
    else 
    printf("You are pass\n");
    return 0;
}