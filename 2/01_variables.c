#include <stdio.h> 
int main() {
    int a, b, c;
    printf("Enter your length of the cuboid");
    scanf("%d", &a);
    printf("Enter your breadth of the cuboid");
    scanf("%d", &b);
    printf("Enter your height of the cuboid");
    scanf("%d", &c);
    int volume = a * b * c;
    printf("The volume of the cuboid is %d", volume);
    return 0;
}