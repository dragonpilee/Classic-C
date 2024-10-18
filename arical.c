#include <stdio.h>

int main() {
    int a, b, c1, c2, c3, c4;

    // Input first number
    printf("Enter the first number: ");
    scanf("%d", &a);

    // Input second number
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Check for division by zero before performing division
    if (b != 0) {
        c1 = a + b;
        c2 = a - b;
        c3 = a * b;
        c4 = a / b;

        // Output the results of each operation
        printf("Addition: %d\n", c1);
        printf("Subtraction: %d\n", c2);
        printf("Multiplication: %d\n", c3);
        printf("Division: %d\n", c4);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
