#include <stdio.h>
int main()
{
    int a, b, c;
    a = 9;
    b = 4;
    c = a / b;
    printf("The quotient without the decimal will be given when using the int is %d  \n", c);

    float d, e, f;
    d = 9;
    e = 4;
    f = d / e;
    printf("The exact quotient will be given when usign  float is %f \n", f);

    /* if you want to get answer in float you should remember:
   1. int and int will always give int
   2. int and float will always give float
   3. float and float will always give float */

    int g = 9;
    float h = 4;
    float i = g / h;
    printf("The exact quotient will be given when usign int with float that is %f \n", i);

    return 0;
}