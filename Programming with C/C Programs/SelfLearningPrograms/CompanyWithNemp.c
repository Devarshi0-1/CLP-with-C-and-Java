#include <stdio.h>
#include <string.h>
struct company
{
    char name[20];
    char address[30];
    char date_of_birth[20];
    char phoneNo[10];
    char id[5];
    char salary[15];
};
int main()
{

    struct company emp[100];
    for (int counter = 0; counter < 5; counter++)
    {
        printf("Enter the name of the Employee number%d\n", counter + 1);
        fgets(emp[counter].name,sizeof(emp[counter].name),stdin);
        printf("Enter phone number\n");
        fgets(emp[counter].phoneNo,sizeof(emp[counter].phoneNo),stdin);
        printf("Enter ID number\n");
        fgets(emp[counter].id,sizeof(emp[counter].id),stdin);
        printf("Enter address\n");
        fgets(emp[counter].address,sizeof(emp[counter].address),stdin);
        printf("Enter Date of birth in DD/MM/YYYY format\n");
        fgets(emp[counter].date_of_birth,sizeof(emp[counter].date_of_birth),stdin);
        printf("Enter salary\n");
        fgets(emp[counter].salary,sizeof(emp[counter].salary),stdin);
    }
    printf("The employee data is:\n");
    for (int counter = 0; counter < 5; counter++)
    {
        printf("Name of employee%d: %s\n",counter+1,emp[counter].name);
        printf("Phone number of employee%d: %s\n",counter+1,emp[counter].phoneNo);
        printf("ID of employee%d: %s\n",counter+1,emp[counter].id);
        printf("Address of employee%d: %s\n",counter+1,emp[counter].address);
        printf("DOB of employee%d: %s\n",counter+1,emp[counter].date_of_birth);
        printf("Salary of employee%d: %s\n",counter+1,emp[counter].salary);
    }
    return 0;
}