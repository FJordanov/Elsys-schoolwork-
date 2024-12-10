#include <stdio.h>

char max_ascii_char(const char *str) {
    char max_char = str[0];

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] > max_char) {
            max_char = str[i];
        }
    }

    return max_char;
}

int main() {
    const char *input_str = "Ivan";
    char result = max_ascii_char(input_str);
    
    printf("Символ с най-висок ASCII код: '%c'\n", result); 
    

    return 0;
}
