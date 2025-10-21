#include <stdio.h>
int main() {
int a, b, c;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
c = a % b;
printf("The modulus of %d and %d is %d\n", a, b, c);    
// modulus operator gives the remainder after division of two numbers



return 0;
}