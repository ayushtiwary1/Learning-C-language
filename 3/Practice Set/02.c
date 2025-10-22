#include <stdio.h>
int main() {
    int maths, physics, chemistry;
    printf("Enter marks in Mathematics: ");
    scanf("%d", &maths);
    printf("Enter marks in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);
    if ( (maths>=33 && physics>=33 && chemistry>=33) && ((maths+physics+chemistry)/3 >=40) ) {
        printf("The student has passed the examination.\n");
    } else {
        printf("The student has failed the examination.\n");
    }


return 0;
}