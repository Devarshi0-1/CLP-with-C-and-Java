#include <stdio.h>
int main()
{
    float matrix[3][3], r1=0, r2=0, r3=0,result=0;
    printf("Enter the elements of the matrix\n");
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            printf("Enter the Element %d%d of the Matrix\t", row + 1, column + 1);
            scanf("%f", &matrix[row][column]);
        }
    }
    r1 = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2]));
    r2 = -(matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2])));
    r2 = matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1]));
    result = r1 + r2 + r3;
    if(result != 0 )
    printf("The rank of the matrix is 3");
    else if(r1 != 0 || r2 !=0 || r3 !=0)
    printf("The rank of the matrix is 2");
    else if(r1 == 0 && r2 == 0 && r3 == 0)
    printf("The rank of the matrix is 1");
    return 0;
}