#include <stdio.h>

int main() {
    int n;
    int isPrime = 1;   // assume prime

    printf("Enter a number: ");
    scanf("%d", &n);

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is NOT a prime number.\n", n);
    }

    return 0;
}
