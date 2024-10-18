#include <stdio.h>

int main() {
    int a, b, c;

    // Input first number
    printf("Enter the first number: ");
    scanf("%d", &a);

    // Input second number
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Perform addition
    c = a + b;
    printf("Addition: %d\n", c);

    // Perform subtraction
    c = a - b;
    printf("Subtraction: %d\n", c);

    // Perform multiplication
    c = a * b;
    printf("Multiplication: %d\n", c);

    // Perform division (ensure b is not zero)
    if (b != 0) {
        c = a / b;
        printf("Division: %d\n", c);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
