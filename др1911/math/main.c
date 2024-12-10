#include <stdio.h>
#include "maths.h"

int main() {
    int num = 5;
    printf("Factorial of %d is %ld\n", num, factorial(num));

    num = 7;
    printf("Factorial of %d is %ld\n", num, factorial(num));

    return 0;
}

//gcc -c maths.c -o maths.o

//ar rcs libmaths.a maths.o

//gcc main.c -o main_program -L. -lmaths
