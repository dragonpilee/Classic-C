#include <stdio.h>
#include <math.h>

int main() {
    int n, d1, d2, d3, d4, d5, sum, t;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    t = n;

    // Extracting digits from the number
    d5 = n % 10; // units place
    n = n / 10;
    d4 = n % 10; // tens place
    n = n / 10;
    d3 = n % 10; // hundreds place
    n = n / 10;
    d2 = n % 10; // thousands place
    d1 = n / 10;  // ten-thousands place (if applicable)

    // Calculate the sum of the fourth power of each digit
    sum = pow(d1, 5) + pow(d2, 5) + pow(d3, 5) + pow(d4, 5) + pow(d5, 5);

    // Check if the sum is equal to the original number
    if (sum == t) {
        printf("The given number is an Armstrong number\n");
    } else {
        printf("The given number is not an Armstrong number\n");
    }

    return 0;
}
