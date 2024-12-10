#include <stdio.h>


#define PRINT_TYPE_INFO(type) \
    printf("| %-12s | %-10s | %-10lu |\n", \
           #type, #type, sizeof(type))

int main() {
    printf("| Type         | Format    | Size (bytes) |\n");
    printf("|--------------|-----------|--------------|\n");

    PRINT_TYPE_INFO(char);
    PRINT_TYPE_INFO(short);
    PRINT_TYPE_INFO(int);
    PRINT_TYPE_INFO(long);
    PRINT_TYPE_INFO(long long);

    return 0;
}
