/*Да се състави програма, която да намира сумата на простите числа в даден масив (1 не се смята за просто число). 
Примерен вход: {1, 7, 10, 15, 16, 13, 23, 30} => Изход: 43 = 7 + 13 + 23*/
#include <stdio.h>


int is_prime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int sum_of_primes(int arr[], int size) {
    int prime_sum = 0;
    for (int i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            prime_sum += arr[i];
        }
    }
    return prime_sum;
}

int main() {
    int arr[] = {1, 7, 10, 15, 16, 13, 23, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result_sum = sum_of_primes(arr, size);
    
    printf("Сумата на простите числа е: %d\n", result_sum);
    
    return 0;
}