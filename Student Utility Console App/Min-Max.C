#include <stdio.h>

int main() {
    int n;
    int num;
    int min, max;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("❌ Invalid count.\n");
        return 0;
    }

    // Read first number to initialize min and max
    printf("Enter number 1: ");
    scanf("%d", &num);
    min = max = num;

    // Read remaining numbers
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
