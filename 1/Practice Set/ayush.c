//findind area of circle using c 
#include <stdio.h>
#define PI 3.14
int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");  // Prompt user for radius
    scanf("%f", &radius); // User input for radius
    area = PI * radius * radius;// Area calculation
    printf("Area of the circle is: %f\n", area);
    return 0;

}


