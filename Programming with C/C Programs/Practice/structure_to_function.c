#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    int salary;
    char name[20];
}emp_data;

void print_data(emp_data emp,int n){
    printf("Name of Employee-%d = %s\n",n, emp.name);
    printf("Code of Employee-%d = %d\n",n, emp.code);
    printf("Salary of Employee-%d = %d\n",n, emp.salary);
}

int main()
{
    int size;
    printf("How many employees do you have?\n");
    scanf("%d",&size);
    emp_data emplo[size];
    for(int counter=0; counter<size; counter++)
    {
        printf("Enter the Name for Employee-%d\n", counter+1);
        // getchar();
        // fgets(emplo[counter].name,sizeof emplo[counter].name,stdin);

        fflush(stdin);
        gets(emplo[counter].name);

        printf("Enter the Code for Employee-%d\n", counter+1);
        scanf("%d", &emplo[counter].code);

        printf("Enter the Salary for Employee-%d\n", counter+1);
        scanf("%d", &emplo[counter].salary);
        
    }
    for(int counter=0; counter<size; counter++)
    {
        print_data(emplo[counter],counter+1);
    }
    return 0;
}