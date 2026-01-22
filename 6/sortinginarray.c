#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    // Outer loop moves the boundary of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; // Assume the first unsorted element is the smallest

        // Inner loop finds the actual minimum element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // Update index if a smaller element is found
            }
        }

        // Swap the found minimum element with the first unsorted element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    // Loop to print the final sorted array
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}