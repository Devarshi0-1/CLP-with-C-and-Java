#include<stdio.h>
float C_To_F(float C);
int main()
{
    float temp;
    printf("Enter the temperature in Celsius to convert into Fahrenheit\n");
    scanf("%f",&temp);
    printf("The temperature in Fahrenheit is: %0.3fF",C_To_F(temp));
    return 0;
}
float C_To_F(float C)
{
    float result = (C*1.8)+32;
    return result;
}