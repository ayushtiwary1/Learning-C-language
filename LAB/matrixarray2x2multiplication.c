#include <stdio.h>
//write a 2d array and print elements for 2x2 matrix
int main() {
      int a[2][2]={{2,5},{6,6}};
    //   printf("%d",a[0][0]);
      for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
      }

    return 0;
}