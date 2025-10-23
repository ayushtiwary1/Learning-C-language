#include <stdio.h>
int main() {
for (int i = 0; i < 15; i++)
{
    if(i==5){
         //  break;// when i is 5 loop will terminate
      continue; // when i is 5 it will skip that iteration
    }
    printf("%d \n", i);
}

return 0;
}