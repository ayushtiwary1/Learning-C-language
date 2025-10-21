#include <stdio.h>
int main() {
    if(1) {
        printf("This condition is true because 1 is non-zero.\n");
    }
    if(0) {
        printf("This condition is false because 0 is zero.\n");
    }
    if(-5) {
        printf("This condition is true because -5 is non-zero.\n");
    }
    if ("asld") {
        printf("This condition is true because asld is non-zero.\n");
    }


return 0;
}