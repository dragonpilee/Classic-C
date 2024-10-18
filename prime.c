#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime\n");
    } else {
        for (i = 2; i * i <= n; i++) { // Check only up to the square root of n
            if (n % i == 0) {
                printf("Not prime\n");
                break;
            }
        }

        if (i * i > n) { // If the loop completes without finding a factor
            printf("Prime\n");
        }
    }

    return 0;
}
