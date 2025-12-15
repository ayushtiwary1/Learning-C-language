
//printing sum of n natural number using recursion


#include <stdio.h>
int sonn(int);
int sonn(int n){
    if(n==1){
        return 1;
    }
    return n + sonn(n-1);
}
int main() {
    int n=3;
    printf("%d", sonn(n));

return 0;
}