#include <stdio.h>
void sum(int a[]);
void sum(int a[]){
    for(int i=0; i<5; i++){
        printf("%d \n", a[i]);
    }
}
int main() {
      int arr[5]={1,2,3,4,5};
      printf("Inside main function\n");
      sum(arr);


return 0;
}