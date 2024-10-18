#include <stdio.h>

int main() {
    int a;

    // Initialize a
    printf("Enter a value for a: ");
    scanf("%d", &a); // Read input from the user

    if (a < 5) {
        printf("a is less than 5\n");
    }

    if (a > 10) {
        printf("a is greater than 10\n");
    } else {
        printf("a is less than or equal to 10\n");
    }

    return 0;
}
