// finding differential of a function using c
#include <stdio.h>
int main() {
    float x, h, derivative;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter a small value for h: ");
    scanf("%f", &h);
    derivative = (2 * (x + h) - 2 * x) / h; // Derivative of f(x) = 2x
    printf("The derivative at x = %f is approximately: %f\n", x, derivative);
    return 0;
}