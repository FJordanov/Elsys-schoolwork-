#include <stdio.h>

#define DEBUG_VAR(var) \
    printf("Variable '%s' = %d, File: %s, Line: %d\n", #var, var, __FILE__, __LINE__);

int main() {
    int x = 42;
    DEBUG_VAR(x);

    int y = 100;
    DEBUG_VAR(y);

    return 0;
}
