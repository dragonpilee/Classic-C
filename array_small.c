#include <stdio.h>

int main() {
    int a[10], n, i, smallest;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    // Check if the input size is valid
    if (n < 1 || n > 10) {
        printf("Invalid size! Please enter a number between 1 and 10.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    smallest = a[0]; // Initialize smallest with the first element

    for (i = 1; i < n; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("The smallest element is %d\n", smallest); // Added newline for better output formatting

    return 0;
}
