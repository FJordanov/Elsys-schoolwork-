#include <stdio.h>
#include <math.h>

void raise_to_fourth(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (long)pow(arr[i], 4);
    }
}

int main() {
    long numbers[] = {2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%ld ", numbers[i]);
    }
    printf("\n");

    raise_to_fourth(numbers, size);

    printf("Array after operations: ");
    for (int i = 0; i < size; i++) {
        printf("%ld ", numbers[i]);
    }
    printf("\n");

    return 0;
}


//gcc main.c -o power_program -lm

//./power_program
