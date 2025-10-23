#include <stdio.h>
int main()
{
    int i = 1, n, prime;
    printf("Enter the number you want to know if its prime or not:  \n");
    scanf("%d", &n);
    if (n == 2 || n == 1 || n == 0)
    {
        prime = 1;
    }
    for (i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0 && n != 2)
        {

            prime = 0;
            break;
        }
        else
        {
            prime = 1;
        }
    }
    if (prime)
    {
        printf("The number %d is a prime number \n", n);
    }
    else
    {
        printf("The number %d is not a prime number \n", n);
    }
    return 0;
}
