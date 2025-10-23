#include <stdio.h>
int main() {
    // using for loop 
    int i=1, sum=0;
    for (int i=1; i<=10; i++)
    {
        sum= sum + i;
    }
printf("The sum of first 10 natural numbers is: %d \n", sum);


    // using do while loop 
    i=1;
    sum=0;
    do 
    {
        sum=sum+i;
        i++;
    }while(i<=10);
    printf("The sum of first 10 natural numbers is: %d \n", sum);
    




return 0;
}