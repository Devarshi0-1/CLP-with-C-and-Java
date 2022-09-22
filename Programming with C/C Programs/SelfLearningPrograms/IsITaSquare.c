#include<stdio.h>
int main()
{
    int length , width;
    printf("Enter the length of the Quadrilateral\n");
    scanf("%d",&length);
    printf("Enter the width of the Quadrilateral\n");
    scanf("%d", &width);
    (length==width)? printf("The shape is a Square\n") : printf("Shape is a rectangle\n");
    return 0;
}