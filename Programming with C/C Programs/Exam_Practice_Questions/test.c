#include<stdio.h>
struct shape
{
float length,breath;
}quadrilateral;

int main()
{
printf("Enter the length and breath of the quadrilateral\n");
scanf("%f\n%f",&quadrilateral.length,&quadrilateral.breath);
if(quadrilateral.length==quadrilateral.breath)
printf("The quadrilateral is a SQUARE and it's area is:\n%f",quadrilateral.length*quadrilateral.breath);
else
printf("The quadrilateral is a RECTANGLE and it's area is:\n%f",quadrilateral.length*quadrilateral.breath);
return 0;
}