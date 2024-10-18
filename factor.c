#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Print 1 as a factor
    if (n > 0) {
        printf("1 is a factor\n");
    }

    // Check for factors from 2 to n/2
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("%d is a factor\n", i);
        }
    }

    // Print the number itself as a factor
    if (n > 0) {
        printf("%d is a factor\n", n);
    }

    return 0;
}
