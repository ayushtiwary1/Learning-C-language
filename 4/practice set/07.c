#include <stdio.h>
int main()
{
    int i = 1, n = 8, sum = 0, table;
    for (int i = 1; i <= 10; i++)
    {
        table = n * i;
        printf("%d\n", table);
        sum = sum + table;
    }
    printf("The sum of the result of multiplication of table 8 from 1 to 10 is %d \n", sum);

    return 0;
}