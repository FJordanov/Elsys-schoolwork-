#include <stdio.h>

#define ARRAY_SIZE 5
#define DEFINE_ARRAY(name) int name[ARRAY_SIZE]
#define PRINT_ARRAY(arr) \
    for (int i = 0; i < ARRAY_SIZE; i++) { \
        printf("%d ", arr[i]); \
    } \
    printf("\n");

int main() {
    DEFINE_ARRAY(myArray) = {1, 2, 3, 4, 5};
    PRINT_ARRAY(myArray);
    return 0;
}
