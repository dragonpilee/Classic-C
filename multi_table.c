#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) { // Check if input is a valid integer
        printf("Invalid input! Please enter a valid integer.\n");
        return 1; // Exit with an error code
    }

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    printf("\n"); // Add a newline for better output formatting
    return 0;
}
