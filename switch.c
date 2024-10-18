#include <stdio.h>

int main() {
    int n;

    printf("Enter a no: ");
    scanf("%d", &n);

    switch (n % 2) {
        case 0:
            printf("even\n");
            break;
        case 1:
            printf("odd\n");
            break;
        default:
            // This case will never be reached because n % 2 will always be 0 or 1 for integers
            printf("program has error\n");
    }

    return 0;
}
