#include <stdio.h>

float c2f(float);
float c2f(float c){
    return ((9.0/5.0)*c)+32.0;
}


int main() {
        float c=40;
        printf("The farhenheight of %.2f celsius is %.2f", c, c2f(c));





return 0;
}