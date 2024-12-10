#include <stdio.h>

void sort_array(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {1, 7, 3, 4, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    sort_array(arr, size);

    for (int i = 0; i < size; i++) {
        sum += arr[i] * i;
    }

    printf("След сортиране: {");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
    printf("Сумата е: %d\n", sum);

    return 0;
}