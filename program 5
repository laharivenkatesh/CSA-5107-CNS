#include <stdio.h>

int main() {
    char p;
    int a, b;

    printf("Enter plaintext (A-Z): ");
    scanf(" %c", &p);

    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    if (a % 2 == 0 || a % 13 == 0) {
        printf("Invalid value of a\n");
        return 0;
    }

    p = p - 'A';
    printf("Ciphertext: %c\n", ((a * p + b) % 26) + 'A');

    return 0;
}
