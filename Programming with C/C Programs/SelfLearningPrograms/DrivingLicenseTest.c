#include<stdio.h>
int main()
{
    int Age;
    printf("Tell your age\n");
    scanf("%d" , &Age);
    if(Age>=18)
    {
    printf("You can have a Driving License as your age is %d which is above 18y/o\n", Age);
    }
    else 
    {
    printf("You cannot have a driving license as your age is %d which is less than 18y/o\n" , Age);
    }
    if(Age<=10)
    {
        printf("Go Ride a bicycle kid\n");
    }
    if(Age==50)
    {
        printf("Celebrate Half Century!\n");
    }
        if(Age>=75)
        {
            printf("Dont Prefer driving at this age\n");
        }
        if(Age==100)
        {
            printf("Celebrate a century!");
            }

    return 0;
}