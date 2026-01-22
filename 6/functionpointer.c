#include <stdio.h>
int sum(int, int);
int sum(int x, int y){
    return x+y;
    // printf("sum of two number is %d", x+y);
}

void main() {
    int a, b, c;
    printf("Enter both numbers a and b: ");
    scanf("%d %d", &a, &b);
    // sum(a,b);
    c=sum(a,b);
    printf("%d", c);
}