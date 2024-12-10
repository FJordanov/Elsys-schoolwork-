#include <stdio.h>
#include <string.h>

#ifdef _WIN32
    #define OS_WINDOWS
#elif __linux__
    #define OS_LINUX
#elif __APPLE__
    #define OS_MAC
#endif

void bubbleSort(int arr[], int size) {
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

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void sortBasedOnOS(int arr[], int size) {
    #ifdef OS_WINDOWS
        printf("bubble sort for Windows.\n");
        bubbleSort(arr, size);
    #elif defined(OS_LINUX)
        printf("selection sort for Linux.\n");
        selectionSort(arr, size);
    #elif defined(OS_MAC)
        printf("insertion sort for MacOS.\n");
        insertionSort(arr, size);
    #else
        printf("reverse for unknown OS.\n");
        reverseArray(arr, size);
    #endif
}

int main() {
    int arr[] = {5, 3, 8, 6, 2, 9, 1, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortBasedOnOS(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
