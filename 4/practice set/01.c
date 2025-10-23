// Program to print multiplication table of a number n using different loops
// Authored by Ayush Tiwari

#include <stdio.h>
int main() {
     // with while loop
    int i=1, n;
        printf("Enter a natural number n: ");
        scanf("%d", &n);
        while (i<=10)
        {
            printf("%d x %d = %d \n",n, i , n*i);
            i++;
        } 
        

    // with do-while loop
    
   // int i=1, n;
    printf("Enter a natural number n: ");
    scanf("%d", &n);
    i=1;
    do 
    {
        printf("%d x %d = %d \n", n, i, n*i);
        i++;
    }while(i<=10);
    


    // with for loop 
    //int i=1, n;
    printf("Enter a natural number n: ");   
    scanf("%d", &n);
    printf("The multiplication table of %d is: \n", n);
    for (int i = 1; i <=10 ; i++)
    {
        printf("%d x %d = %d \n", n, i, n*i);
    }
    



return 0;
}