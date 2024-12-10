#include <stdio.h>

#define SWAP(A, B, TYPE) \
    do { \
        TYPE temp = A; \
        A = B; \
        B = temp; \
    } while(0)

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    do { \
        for (int i = 0; i < SIZE - 1; i++) { \
            for (int j = i + 1; j < SIZE; j++) { \
                if (ARRAY[i] COMPARE ARRAY[j]) { \
                    SWAP(ARRAY[i], ARRAY[j], TYPE); \
                } \
            } \
        } \
    } while(0)

int main() {
    int array[] = {5, 2, 9, 1, 7};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, >); 

    printf("Sorted array (descending): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, <); 
    printf("Sorted array (ascending): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
