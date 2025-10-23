// while loop is different that do while because while checks the condition first and then run but do while loop runs first and then check the condition
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("The value of i  is %d \n", i);
        i++;
    } while (i == 0);// this will run only once because first it will print i=0 and then increment i to 1 and then check the condition i==0 which is false so loop will terminate

    return 0;
}