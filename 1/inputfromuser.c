#include <stdio.h>
int main() {
  
    int a; 
    scanf("%d", &a); // taking input from user and storing it in variable a
    printf("the value of a is %d\n", a); // printing the value of a
    return 0;
/*
1. %d is a format specifier used in C to denote that the corresponding argument is an integer.
2. &a is the address-of operator that provides the memory address of the variable a, allowing scanf to store the input value directly into that memory location.
3. %f is a format specifier used in C to denote that the corresponding argument is a floating-point number.
4. %c is a format specifier used in C to denote that the corresponding argument is a single character.

*/
}