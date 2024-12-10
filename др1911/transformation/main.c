#include <stdio.h>
#include "transformation.h"

int main() {
    const char *inputs[] = {"-123", "12ab23", "456", "invalid123"};
    int num_tests = 4;

    for (int i = 0; i < num_tests; i++) {
        transformation result = string_to_integer(inputs[i]);
        if (result.error[0] != '\0') {
            printf("Input: '%s' => Error: %s\n", inputs[i], result.error);
        } else {
            printf("Input: '%s' => Result: %ld\n", inputs[i], result.result);
        }
    }

    return 0;
}


//gcc -E transformation.c -o transformation.i
//gcc -S transformation.c -o transformation.s
//gcc -c transformation.c -o transformation.o

//gcc main.c transformation.o -o main_program
