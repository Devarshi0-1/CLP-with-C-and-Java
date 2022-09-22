#include<stdio.h>
int main()
{
    int length , width;
    printf("Enter the length of the Rectangle\n");
    scanf("%d", &length);
    printf("Enter the Width of the Rectangle \n");
    scanf("%d" , &width);
    if(length==0 || width==0)
    {
        printf("Invalide input, a side(s) of a rectangle cannot be zero\n");
    }
    else if(length==width )
    {
        printf("This figure is not a rectange, it's a square\n");
        printf("The area of square is %d", length*width);
    }
    else if(length<0 || width<0)
    {
        printf("Rectangle cannot have a negative parameter");
    }
    else
    {
        printf("The area of rectangle is %d \n" , length*width);
    }
    return 0;
}