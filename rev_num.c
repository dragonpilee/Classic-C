#include <stdio.h>

int main() {
    int n, n1, n2, n3;

    // Input a three-digit number
    printf("Enter a three digit number: ");
    scanf("%d", &n);

    // Ensure the input is a valid three-digit number
    if (n >= 100 && n <= 999) {
        n1 = n / 100;         // Extract the hundreds place
        n2 = (n % 100) / 10;  // Extract the tens place
        n3 = n % 10;          // Extract the ones place

        // Reverse the digits
        int reversed = (n3 * 100) + (n2 * 10) + n1;

        // Output the reversed number
        printf("The reversed number is %d\n", reversed);
    } else {
        // Error message if the number is not three digits
        printf("Please enter a valid three-digit number.\n");
    }

    return 0;
}
