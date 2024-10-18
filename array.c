#include <stdio.h>

int main() {
    int a[10], i, n;

    printf("Enter the size of array (max 10): ");
    scanf("%d", &n);

    // Check if the input size is valid
    if (n < 1 || n > 10) {
        printf("Invalid size! Please enter a number between 1 and 10.\n");
        return 1; // Exit with an error code
    }

    printf("Enter Elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Elements: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n"); // Added for better output formatting
    return 0;
}
