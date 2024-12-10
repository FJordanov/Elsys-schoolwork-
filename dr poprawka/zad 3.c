#include <stdio.h>

#define debug(var) \
    printf("Variable '%s' = %d, File: %s, Line: %d\n", #var, var, __FILE__, __LINE__);

int main() {
    int a = 37;
    debug(a);

    int b = 98;
    debug(b);

    return 0;
}
