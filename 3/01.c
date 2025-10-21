#include <stdio.h>
int main() {
    int age;
    printf("Enter you age: ");
    scanf("%d", &age);
    if (age > 18) {
        printf("You are eligible to vote.\n");
    } 
    if (age == 18) {
        printf("You just became eligible to vote this year.\n");
    }   
    else {
        printf("You are not eligible to vote.\n");
    }


return 0;
}