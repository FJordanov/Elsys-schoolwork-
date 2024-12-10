#include <stdio.h>

#define SWAP(A, B, TYPE) \
    do { \
        TYPE temp = A; \
        A = B; \
        B = temp; \
    } while(0)

int main() {
    int x = 5, y = 10;
    printf("Before: x = %d, y = %d\n", x, y);

    SWAP(x, y, int);

    printf("After: x = %d, y = %d\n", x, y);

    double a = 3.14, b = 2.71;
    printf("Before: a = %.2f, b = %.2f\n", a, b);

    SWAP(a, b, double);

    printf("After: a = %.2f, b = %.2f\n", a, b);

    return 0;
}
