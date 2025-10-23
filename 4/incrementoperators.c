#include <stdio.h>
int main()
{
    int i = 5;
    printf("The value of i is %d \n", i);
    i = i + 5;
    printf("The value of i is %d \n", i);
    i++;// Post-increment (print then increment)
    printf("The value of i is %d \n", i);
    ++i;// Pre-increment (increment then print)
    printf("The value of i is %d \n", i);
    printf("The value of i is %d \n", i++);
    printf("The value of i is %d \n", ++i);
    return 0;

//same for i-- and --i
// i +=2 is same as i = i + 2
}