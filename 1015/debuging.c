#include <stdio.h>

void bubbleSort(int arr[], int size){
    int sorted = 0;
    for (int i = 0; i < size - 1 && !sorted; i ++){
    sorted = 1;
     for(int j = 0; j< size- i - 1 ; j++){
        if (arr[j] < arr[j+1];){
            int temp =marr{j};
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            sorted = 0;
        }
     }
    }
}

imt main(void) {
    int arr[5] = {4, 3, 1, 5, 2};
    int size = 5; 

for (int i = 0; i < 5; i ++){
    printf("%d", arr[i]);
}

}