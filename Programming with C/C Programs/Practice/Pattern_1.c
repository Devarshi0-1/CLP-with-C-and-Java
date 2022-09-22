#include<stdio.h>
int main()
{
    int New_line,Printing,Stares;
    printf("Enter the length of the pattern\n");
    scanf("%d",&Stares);
    for(New_line=1;New_line<=Stares;New_line++)
    {
        for(Printing=1;Printing<=New_line;Printing++)
        {
            printf(" %d",Printing);
        }
        printf("\n");
    }
    return 0;
}