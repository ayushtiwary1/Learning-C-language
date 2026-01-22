#include <stdio.h>
int main() {
    int arr[5] = {5, 10, 20, 30, 40};
    int i, key = 5;

    for(i = 0; i < 5; i++) {
        if(key == arr[i]) {
            printf("Element %d found at address %d.\n", key, i);
            break;
        }
    }

    if(i == 5) {
        printf("Element %d not found in array\n", key);
    }

    return 0;
}