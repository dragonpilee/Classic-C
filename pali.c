#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; // Store the original number

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;               // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        n /= 10;                          // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        printf("The given number is a palindrome number\n");
    } else {
        printf("The given number is not a palindrome number\n");
    }

    return 0;
}
