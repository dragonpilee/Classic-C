#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) { // Check if 'a' is greater than or equal to both 'b' and 'c'
        printf("a is greatest\n");
    } else if (b >= c) { // Check if 'b' is greater than or equal to 'c'
        printf("b is greatest\n");
    } else {
        printf("c is greatest\n");
    }

    return 0;
}
