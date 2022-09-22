#include <stdio.h>
int main()
{
    int Num[10],counter,positive_num=0,negative_num=0,total=0;
    for (counter = 0; counter < 10; counter++)
    {
        printf("Enter Num%d\n", counter + 1);
        scanf("%d", &Num[counter]);
        total=total+Num[counter];
        if (Num[counter] > 0)
        {
            printf("%d is positive\n", Num[counter]);
            positive_num++;
        }
        else if (Num[counter] < 0)
        {
            printf("%d is negative\n", Num[counter]);
            negative_num++;
        }
        else
        {
            printf("The number is zero\n");
        }
    }
    printf("Total Posotitve Numbers in the array are %d\n", positive_num);
    printf("Total Negative Number is the array are %d\n", negative_num);
    printf("The total of all the elements in the array is %d", total);
    return 0;
}