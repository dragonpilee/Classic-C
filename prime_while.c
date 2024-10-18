#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter a no: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime\n");
        return 0; // Early exit for numbers <= 1
    }

    while (i <= n / 2) { // Check up to n/2 for efficiency
        if (n % i == 0) {
            break;
        }
        i++;
    }

    if (i > n / 2) { // Check if we went through the entire loop without finding a factor
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
