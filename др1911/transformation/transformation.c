#include "transformation.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

transformation string_to_integer(const char *input) {
    transformation result = {0, "\0"};
    char *endptr;

    result.result = strtol(input, &endptr, 10);

    if (*endptr != '\0') {
        result.result = 0;
        strncpy(result.error, "Invalid input string", sizeof(result.error) - 1);
        result.error[sizeof(result.error) - 1] = '\0';
    }

    return result;
}
