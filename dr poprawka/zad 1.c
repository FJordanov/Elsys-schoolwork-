#include <stdio.h>

#define arr_size 5
#define def_arr(name) int name[arr_size]
#define print_arr(arr) \
    for (int i = 0; i < arr_size; i++) { \
        printf("%d ", arr[i]); \
    }

int main() {
    def_arr(myarr) = {1, 2, 3, 4, 5};  
    print_arr(myarr);                  
    return 0;
}
