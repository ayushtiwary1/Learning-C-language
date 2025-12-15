#include <stdio.h>

int sum(int, int);//function declaration

int sum(int x, int y){ //funtion definition
    printf("The sum of two number is %d \n", x+y);
    return x+y;
}

int main() {
    int a=5, b=3;
    sum(a,b);


return 0;
}