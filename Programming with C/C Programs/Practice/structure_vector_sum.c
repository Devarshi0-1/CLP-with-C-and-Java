#include <stdio.h>
struct vector
{
    int x;
    int y;
}v1,v2;

int main()
{
    printf("Enter the value of X-coordinate of vector V1:\n");
    scanf("%d",&v1.x);
    printf("Enter the value of Y-coordinate of vector V1:\n");
    scanf("%d",&v1.y);
    printf("Enter the value of Y-coordinate of vector V2:\n");
    scanf("%d",&v2.x);
    printf("Enter the value of Y-coordinate of vector V2:\n");
    scanf("%d",&v2.y);
    printf("The vectors are:\nV1:\t%di + %dj",v1.x,v1.y);
    printf("\nV2:\t%di + %dj",v2.x,v2.y);
    printf("\nV1 + V2 = %di + %dj",(v1.x + v2.x),(v2.y+v1.y));
    return 0;
}