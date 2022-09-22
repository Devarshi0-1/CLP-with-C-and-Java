#include<stdio.h>
#include<math.h>
int main()
{
    float side;
    printf("Enter the side of square:\t");
    scanf("%f", &side);
    printf("The area of square is %f", pow(side,2));
    return 0;
}
