#include <stdio.h>

long decimal_to_binary(int n) {
    if (n == 0) {
        return 0;
    }
    
    return n % 2 + 10 * decimal_to_binary(n / 2);
}

int main() {
    int decimal_number = 10;
    long binary_number = decimal_to_binary(decimal_number);
    
    printf("Двоично представяне на %d: %ld\n", decimal_number, binary_number); 

    return 0;
}
