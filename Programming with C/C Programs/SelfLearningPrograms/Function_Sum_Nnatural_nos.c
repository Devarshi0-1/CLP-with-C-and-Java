#include <stdio.h>
int addNumbers(int n);
int main()
{
    int Num;
    printf("Of many natural numbers do you want you calculate the sum of:\n");
    scanf("%d", &Num);
    printf("The sum of %d natural numbers is: %d", Num, addNumbers(Num));
    return 0;
}
int addNumbers(int n)
{
    if (n != 0)
    return n + addNumbers(n - 1);
    else
    return n;
}
