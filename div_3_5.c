#include <stdio.h>

int main() {
    int n, r1, r2;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate remainders
    r1 = n % 3;
    r2 = n % 5;

    // Check divisibility
    if ((r1 == 0) && (r2 == 0)) {
        printf("Number is divisible by both 3 and 5\n");
    } else if ((r1 == 0) && (r2 != 0)) {
        printf("Number is divisible by 3 but not divisible by 5\n");
    } else if ((r1 != 0) && (r2 == 0)) {
        printf("Number is divisible by 5 but not divisible by 3\n");
    } else {
        printf("Number is not divisible by 3 or 5\n");
    }

    return 0;
}
