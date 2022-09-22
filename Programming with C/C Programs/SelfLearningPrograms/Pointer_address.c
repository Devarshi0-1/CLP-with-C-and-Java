#include <stdio.h>
int main()
{
    int Num, Num2, Num3;
    int *Pointer1, *Pointer2, *Pointer3;
    printf("Enter 3 any number:\n");
    scanf("%d\n%d\n%d", &Num, &Num2, &Num3);
    Pointer1 = &Num;
    Pointer2 = &Num2;
    Pointer3 = &Num3;
    printf("The address of %d %d %d is %u %u %u\n", Num, Num2, Num3, &Num, &Num2, &Num3);
    printf("The value at %u %u %u is %d %d %d", &Num, &Num2, &Num3, *Pointer1, *Pointer2, *Pointer3);
    return 0;
}