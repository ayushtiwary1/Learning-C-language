#include <stdio.h>

//wap using function to find the area of circle and rectangle

int arofcircle(int);
int arofcircle(int radius) {
    return 3.14 * radius * radius;
}

int arofrectangle(int, int);
int arofrectangle(int length, int breadth) {
    return length * breadth;
}


int main() {
    int radius, length, breadth;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    printf("Area of circle: %d\n", arofcircle(radius));

    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    printf("Area of rectangle: %d\n", arofrectangle(length, breadth));
       
    return 0;
}