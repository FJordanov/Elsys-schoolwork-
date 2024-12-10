#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) { 
        
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int arr[] = {1, 2, 5, 7, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int index1 = binary_search(arr, size, 5);
    int index2 = binary_search(arr, size, 6);
    
    printf("Индекс на 5: %d\n", index1); 
    printf("Индекс на 6: %d\n", index2); 

    return 0;
}
