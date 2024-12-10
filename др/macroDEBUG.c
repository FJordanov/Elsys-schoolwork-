#include <stdio.h>

#define DEBUG

void sort_sum(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum = 0;

    #ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nElements /3: ");
    #endif

    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
            
            #ifdef DEBUG
            printf("%d ", arr[i]);
            #endif
        }
    }
    
    printf("Sum = %d", sum);
}

int main() {
    int arr[] = {5, 3, 8, 6, 2, 9, 1, 7, 4};
    int size

sort_sum(arr, size);

    return 0;
}