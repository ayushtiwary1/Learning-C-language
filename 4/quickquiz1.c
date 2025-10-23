#include <stdio.h>
int main() {
    int i = 0; // i is initialized at 0

    // 1. First loop: Increments i from 0 up to 10 silently
    while (i < 11) {
        i = i + 1;
    }

    // 2. Second loop: Prints i from 11 up to 20
    while (i <= 20) {
        printf("The value of i is %d \n", i);
        i = i + 1;
    }

    return 0;
}