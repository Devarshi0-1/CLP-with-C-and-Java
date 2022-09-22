#include <stdio.h>
int main()
{
    int m=29,*ab;
    printf("Address of m : %u\nValue of m : %d\n",&m,m);
    ab =  &m;
    printf("Address of pointer ab : %u\nContent of pointer ab : %d\n",ab,*ab);
    m = 34;
    printf("Address of pointer ab : %u\nContent of pointer ab : %d\n",ab,*ab);
    *ab = 7;
    printf("Address of m : %u\nValue of m : %d\n",ab,*ab);
    return 0;
}