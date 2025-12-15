//write a program to find average of 3 numbers

#include <stdio.h>
float avg(float a, float b, float c);
float avg(float a, float b, float c){
    return (a+b+c)/3;
}
int main() {
    float a , b, c;
    printf("Enter the three number you want the average of:  ");
    scanf("%f %f %f", &a, &b, &c);

    printf("The average of %.2f , %.2f and %.2f is %.2f", a, b, c, avg(a, b, c));

return 0;
}