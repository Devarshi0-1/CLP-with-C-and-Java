#include <stdio.h>
#include <math.h>
int main()
{
    int number, digit, cube, sum = 0, temp;
    printf("Enter the number\t");
    scanf("%d", &number);
    temp = number;
    while (number > 0)
    {
        digit = number % 10;               //To calcualte the find the last digit of the number
        cube = pow(digit,3);               //Cube of the digit found
        sum = sum + cube;                  //Addition of cubes of all the digits and storing in sum variable
        number = number / 10;              //Eliminating the digit found from the number so that other digits may be found
    }
    number = temp;
    printf("******************************************************\n");
    printf("The sum of cubes of the digits of %d is %d so it's\n",number,sum);
    if (number == sum)
    {
        printf("Armstrong Number\n");
        printf("******************************************************\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
        printf("******************************************************\n");
    }
    return 0;
}