#include <stdio.h>

int main() {
    int i, n, c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    for (i = 1; i <= n; i++) {
        c = c + i;
    }

    printf("Sum is %d\n", c);

    return 0;
}
