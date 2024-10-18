#include <stdio.h>

int main() {
    int a, b;

    // Input first number
    printf("Enter the first number: ");
    scanf("%d", &a);

    // Input second number
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Compare and print the larger number
    if (a > b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }

    return 0;
}
