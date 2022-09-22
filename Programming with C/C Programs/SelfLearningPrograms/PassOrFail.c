#include<stdio.h>
int main()
{
    int Physics, Chemistry, Maths, Computer;
    // Maximum marks in each subjest is 25
    printf("Enter your marks in Physics\n");
    scanf("%d", &Physics);
    printf("Enter your makrs in Chemistry\n");
    scanf("%d", &Chemistry);
    printf("Enter your marks in Maths\n");
    scanf("%d", &Maths);
    printf("Enter your marks in Computer\n");
    scanf("%d", &Computer);
    printf("Your Total Marks will be %d\n", Physics + Chemistry + Maths + Computer);
    printf("Your percentage is %d\n", (Physics + Chemistry + Maths + Computer) );
    if(Physics<=15 || Chemistry<=15 || Maths<=15 || Computer<=15 || Physics + Chemistry + Maths + Computer<= 40 )
    {
        printf("You are fail\n");
    }
    else 
    printf("You are pass");
    return 0;
    
}