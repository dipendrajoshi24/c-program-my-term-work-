#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("%d is %sa prime number.\n", num, isPrime(num) ? "" : "not ");
    return 0;
}
