#include <stdio.h>
int main() {
    // enter the number you want to check if it is palindrome or not 
    int a;
    printf("Enter the number you want to check if palindrome or not: ");
    scanf("%d", &a);
    int original = a;
    int reversed = 0;
    while (a != 0) {
        int digit = a % 10;
        reversed = reversed * 10 + digit;
        a /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
return 0;
}