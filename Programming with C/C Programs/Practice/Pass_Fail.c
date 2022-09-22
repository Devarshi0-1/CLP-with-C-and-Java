#include <stdio.h>
int main()
{
    float BEE, Computer, Chemistry, Maths, English, Maximum_marks, Total_Maximum_Marks, Total, Percentage;
    printf("Enter the Marks of subject BEE/Computer/Chemistry/Maths/English respectively\n");
    scanf("%f\n%f\n%f\n%f\n%f", &BEE, &Computer, &Chemistry, &Maths, &English);
    printf("Enter the maximum marks\n");
    scanf("%f", &Maximum_marks);
    Total_Maximum_Marks = Maximum_marks * 5;
    Total = BEE + Computer + Chemistry + Maths + English;
    Percentage = (Total / Total_Maximum_Marks) * 100;
    printf("Percentage=%f\n",Percentage);
    if(Percentage>=60)
    printf("First Division");
    else if(Percentage>50 && Percentage<=59)
    printf("Second Division");
    else if(Percentage>40 && Percentage<=49)
    printf("Third Division");
    else
    printf("Fail");
    return 0;
}