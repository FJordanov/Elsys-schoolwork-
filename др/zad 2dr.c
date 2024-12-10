#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;
    printf("По-голямото от %d и %d е %d\n", x, y, MAX(x, y));

    return 0;
}
