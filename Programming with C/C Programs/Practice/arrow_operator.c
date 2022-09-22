#include <stdio.h>
struct employee
{
    int code;
    float salary;
}emp1,emp2,*ptr,*ptr2;

int main()
{   
    ptr = &emp1;
    ptr2 = &emp2;
    printf("Enter the Code and Salary of Employee-1\n");
    scanf("%d%f",&emp1.code,&emp1.salary);
    printf("Enter the Code and Salary of Employee-2\n");
    scanf("%d%f",&emp2.code,&emp2.salary);
    printf("The details of both the employees are\n");
    printf("Employee-1\nCode:\t%d\nSalary:\t%f\n",ptr->code,ptr->salary);
    printf("Employee-2\nCode:\t%d\nSalary:\t%f\n",ptr2->code,ptr2->salary);
    return 0;
}