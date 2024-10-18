#include <stdio.h>

int main() {
    int a, b, d;

    // Input first number
    printf("Enter a number: ");
    scanf("%d", &a);

    // Input second number
    printf("Enter another number: ");
    scanf("%d", &b);

    // Perform subtraction
    d = a - b;

    // Print result
    printf("Result of subtraction: %d\n", d);

    return 0;
}
