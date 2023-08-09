#include <stdio.h>

void swap(int *xp, int *yp)
{
    int tmp = *xp;
    *xp = *yp;
    *yp = tmp;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    printf("\nUsing Bubble sort\n\n");
    int i, j, tmp, swaps;
    
    for (i = 0; i < n-1; i++)
    {
        swaps = 0; // initialize swaps for each iteration
        
        printf("Iteration# %d\n",i+1);
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                //then swap
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swaps++; // increment swaps if a swap occurred
            }
            printArray(arr, n);
        }
        
        printf("Swaps: %d\n\n", swaps); // print the number of swaps for each iteration
    }
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = 9; //size of the array
    
    printf("Array before sorting: \n");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("\nSorted Array: ");
    printArray(arr, n);
    
    return 0;
}
