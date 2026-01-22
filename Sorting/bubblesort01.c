#include <stdio.h>
#include <stdlib.h>
// Printing an array
void printarray(int *A, int n);
void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}
// Taking array from the user
void scanarray(int *A, int n);
void scanarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
}
// Bubble sort of the array
void bubblesort(int *A, int n);
void bubblesort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // Taking the size of array
    int n;
    printf("Enter the size of array you want");
    scanf("%d", &n);

    // One array for marks
    int *marks = (int *)malloc(n * sizeof(int));
    printf("Enter the %d marks you said\n", n);
    scanarray(marks, n);
    printf("This the marks you have entered\n");
    printarray(marks, n);
    bubblesort(marks, n);
    printf("This is the sorted marks in ascending order\n");
    printarray(marks, n);

    // One array for attendence
    int *attendence = (int *)malloc(n * sizeof(int));
    printf("Enter the %d attendence you said\n", n);
    scanarray(attendence, n);
    printf("This the attendence you have entered\n");
    printarray(attendence, n);
    bubblesort(attendence, n);
    printf("This is the sorted attendence in ascending order\n");
    printarray(attendence, n);

    //Freeing the memory
    free(attendence);
    free(marks);

    
    return 0;
}