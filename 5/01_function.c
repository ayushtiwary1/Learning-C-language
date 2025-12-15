#include <stdio.h>

//Function prototype or declaration
int sum(int, int);

//Funtion definition 
int sum(int x, int y){
  // printf("the sum is %d \n", x+y);
    return x+y;
}


int main() {
        
    int a=5, b=10;
    int c = sum(a,b);
    printf("%d", c);
    

return 0;
}