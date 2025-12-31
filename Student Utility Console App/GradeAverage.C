#include <stdio.h>

int main() {
    int n;
    double grade, sum = 0, average;

    printf("How many grades? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("invalid number of grades.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("Enter grade %d: ", i);
        scanf("%lf", &grade);
        sum += grade;
    }

    average = sum / n;

    printf("Average grade = %.2f\n", average);

    return 0;
}
