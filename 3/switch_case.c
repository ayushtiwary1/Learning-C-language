#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("you entered 1\n");
    case 2:
        printf("you entered 2\n");
    case 3:
        printf("you entered 3\n");
    case 4:
        printf("you entered 4\n");
    default:
        printf("you entered a number other than 1,2,3,4\n");
    }

// break statement is missing in the above switch cases
// so all the cases after the matched case will also be executed







    int b;
    scanf("%d", &b);

    switch (b)
    {
    case 1:
        printf("you entered 1\n");
        break;
    case 2:
        printf("you entered 2\n");
        break;
    case 3:
        printf("you entered 3\n");
        break;
    case 4:
        printf("you entered 4\n");
        break;
    default:
        printf("you entered a number other than 1,2,3,4\n");
    }

// break statement is used in the above switch cases
// so only the matched case will be executed and the control will come out of the switch case


    return 0;
}