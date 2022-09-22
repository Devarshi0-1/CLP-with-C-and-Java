#include <stdio.h>
int main()
{
    float angle1, angle2, angle3;
    printf("Enter the three sides of the triangle\n");
    scanf("%f\n%f\n%f", &angle1, &angle2, &angle3);
    if ((angle1 > 0 && angle2 > 0 && angle3 > 0) && angle1 + angle2 + angle3 == 180)
    {
        if (angle1 == angle2 && angle2 == angle3)
            printf("The triangle is equilateral");
        else if (angle1 == angle2 || angle2 == angle3 || angle3 == angle1)
            printf("The triangle is isocelese");
        else
            printf("The triangle is scalene");
    }
    else
        printf("Invalid input check 3 angles again\n");
    return 0;
}