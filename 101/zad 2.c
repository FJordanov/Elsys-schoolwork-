/*Да се състави програма, която да връща произведението на цифрите на дадено число. Примерен вход: 417 => Изход: 28 = 4 * 1 * 7;*/
#include <stdio.h>

int main() {
    int number;
    int product = 1; 
    int original_number; 
    int digit;

    
    printf("Въведете число: ");
    scanf("%d", &number);

    original_number = number; 

    while (number > 0) {
        digit = number % 10; 
        product *= digit; 
        number /= 10; 
    }

    printf("Произведението на цифрите на %d е: %d\n", original_number, product);

    return 0;
}