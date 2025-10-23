//first n natural numbers using do while loop 
#include <stdio.h>
int main() {
   int i=0, n;
   printf("Enter a natural number n: ");
   scanf("%d", &n);
   do
   {
    printf("%d \n", i);
    i++;
   } while (i<n);


return 0;
}