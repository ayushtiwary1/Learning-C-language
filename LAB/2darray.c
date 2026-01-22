#include <stdio.h>
void multply(int mat1[2][2], int mat2[2][2], int res[2][2]);
void multply(int mat1[2][2], int mat2[2][2], int res[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int a[2][2] = {{2, 4}, {5, 6}}, b[2][2] = {{5, 8}, {3, 4}}, c[2][2];
    
    //printing matrix a
    printf("Matrix a:  \n");
        for (int l = 0; l < 2; l++)
    {
        for (int m = 0; m < 2; m++)
        {
            printf("%d  ", a[l][m]);
        }
        printf("\n");
    }

    //printing matrix b
    printf("Matrix b:  \n");
        for (int l = 0; l < 2; l++)
    {
        for (int m = 0; m < 2; m++)
        {
            printf("%d  ", b[l][m]);
        }
        printf("\n");
    }





   //printing matrix c
   printf("Multiplication of a and b , i.e. c:  \n");
    multply(a, b, c);
    for (int l = 0; l < 2; l++)
    {
        for (int m = 0; m < 2; m++)
        {
            printf("%d  ", c[l][m]);
        }
        printf("\n");
    }

    return 0;
}