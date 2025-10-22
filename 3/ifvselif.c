#include <stdio.h>
int main() {
    int a;
    printf("Enter the value of a that must be a positive integer: ");
    scanf("%d", &a);

    if(a%2==0) {
        printf("a is an even number.\n");

    }
    if (a%4==0) {
        printf("a is divisible by 4.\n");
    }
    else if(a%5==0) {
        printf("a is divisible by 5.\n");
    }
    else if (a%2!=0) {
        printf("a is an odd number.\n");
    }
    else {
        printf("a is not a valid positive integer.\n");
    }


return 0;
}