/* if there is not paranthesis then
operator precedec of * and % and / is more higher than
+ or - and then 
= have the lesser precedence. 



and for the *, % and / have the left to right operator associativity.*/
#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 15;
    int result;

    result = a + b * c; // Multiplication has higher precedence than addition
    printf("Result of a + b * c = %d\n", result); // Expected: 5 + (10 * 15) = 155

    result = (a + b) * c; // Parentheses change the order of evaluation
    printf("Result of (a + b) * c = %d\n", result); // Expected: (5 + 10) * 15 = 225

    result = a + b % c; // Modulus has higher precedence than addition
    printf("Result of a + b %% c = %d\n", result); // Expected: 5 + (10 % 15) = 15

    result = a + b - c; // Addition and subtraction have the same precedence, evaluated left to right
    printf("Result of a + b - c = %d\n", result); // Expected: (5 + 10) - 15 = 0

    result = a * b / c; // Multiplication and division have the same precedence, evaluated left to right
    printf("Result of a * b / c = %d\n", result); // Expected 

return 0;
}