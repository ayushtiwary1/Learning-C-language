#include <stdio.h>
#include <string.h>
int main() {
    int a;
    printf("Enter the value of a that must be a positive integer: ");
    scanf("%d", &a);
    char ans[]="";
    if(a%2==0) {
        strcpy(ans,"a is an even number.\n" );
    }
    if (a%4==0) {
        strcpy(ans,"a is divisible by 4.\n");
    }
    else if(a%5==0) {
        strcpy(ans,"a is divisible by 5.\n");
    }
    else if (a%2!=0) {
       strcpy( ans , "a is an odd number.\n");
    }
    else {
        strcpy(ans, "a is not a valid positiv integer.\n" );
    }
printf("%s", ans);

return 0;
}