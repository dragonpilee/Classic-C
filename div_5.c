#include <stdio.h>

int main() {
    int n;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        // Handle the case when n is 0
        printf("The number is 0 and it is divisible by 5.\n");
    } else {
        // Check if the number is divisible by 5
        if (n % 5 == 0) {
            printf("The number %d is divisible by 5.\n", n);
        } else {
            printf("The number %d is not divisible by 5.\n", n);
        }
    }

    return 0;
}
