#include <stdio.h>

#define debug_var(var) \
    printf("Variable '%s' = '%d'; File: '%s'; Line: '%d'\n") #var, var, __FILE__, __LINE__;

int main(){
    int a = 37;
    debug_var(a);

    int b = 89;
    debug_var(b);

    return 0;
}

//same as zad 3, a tehnikal mistake
