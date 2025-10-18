#include <stdio.h>
int main() {
    float length, breadth;
    printf("Enter length  of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    float area = length * breadth;
    printf("Area of rectangle: %.2f\n", area);
    return 0;
    
}