#include <stdio.h>

int main() {
    int a, b, c, n;

    // Input first number
    printf("Enter the first no: ");
    scanf("%d", &a);

    // Input second number
    printf("Enter the second no: ");
    scanf("%d", &b);

    // Input third number
    printf("Enter the third no: ");
    scanf("%d", &c);

    // Perform the addition
    n = (a + b) + c;

    // Output the result
    printf("The number is %d\n", n);

    return 0;
}
