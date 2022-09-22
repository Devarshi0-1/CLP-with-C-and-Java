#include <stdio.h>
int main()
{
    int size, counter;
    float average,total=0.000;
    printf("Enter the Strength of the Class\t");
    scanf("%d",&size);
    int Marks[size];
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter the marks of Roll No.%d\n",counter+1);
        scanf("%d",&Marks[counter]);
        total = total+Marks[counter];
    }
    average=total/size;
    printf("The average of the class = %f", average);
    return 0;
}