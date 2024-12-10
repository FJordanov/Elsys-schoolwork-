#include <stdio.h>

#define swap(A, B, TYPE) \
    { TYPE temp = A; A = B; B = temp; }

#define sort(ARRAY, SIZE, TYPE, COMPARE) \
    for (int i = 0; i < SIZE - 1; i++) { \
        for (int j = i + 1; j < SIZE; j++) { \
            if (ARRAY[i] COMPARE ARRAY[j]) \
                swap(ARRAY[i], ARRAY[j], TYPE); \
        } \
    }


int main() {
    int array[] = {5, 2, 9, 1, 7};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
   
    sort(array, size, int, >); 

    printf("sorted array (descending): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
   
    sort(array, size, int, <); 

    printf("sorted array (ascending): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
   

    return 0;
}