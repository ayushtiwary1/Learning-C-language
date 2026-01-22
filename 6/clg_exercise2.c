#include <stdio.h>
int main() {
    int arr[5]={5,10,20,30,35};
    int key=100;
    for (int i=0; i<5; i++){
        if(key!=0){
            if(arr[i]==key){
                printf("Element found %d at %d", key, i);
            }
        }
        else 
        printf("Element not found");
    }


return 0;
}