#include <stdio.h>
float force(float);
float force(float a){
    return a*9.8;
}
int main() {
    float mass=50;
    printf("The force of attraction due to earth for mass %.2f kg is %.2f Newton", mass, force(mass));


return 0;
}