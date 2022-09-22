#include<stdio.h>
#include<math.h>
#include<string.h>
void Hello();
void area();
void main()
{
    int choice=0;
    printf("ENTER CHOICE\n");
    scnaf("%d",&choice);
    if(choice==1)
    {
    void Hello();
    }
    else if (choice==2)
    {
        void area();
    }
}
void Hello()
{
    printf("Hello World\n");
}
void area()
{
    char choice;
    printf("Which shape you want to choose for calculating area?\n");
    printf("Press\n");
    printf("S for square or Rectangle\nC for Circle\nCy for Cylinder\n");
    scanf("%c",&choice);
    if(choice=='S'|| choice=='s')
    {
        float side1,side2;
        printf("Enter any two sides\n");
        scnaf("%f\n%f",&side1,&side2);
        printf("Area of the quadilateral is %f",side1*side2);
    }
    else if()
}