#include <stdio.h>

int ngd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nmk(int a, int b) {
    return (a * b) / ngd(a, b);
}

int main() {
    int a = 12, b = 18;
    printf("Най-малко кратно на %d и %d и %d", a, b, nmk(a, b));
    return 0;
}

//gcc -S program.c -o program.s

//gcc -c program.c -o program.o
