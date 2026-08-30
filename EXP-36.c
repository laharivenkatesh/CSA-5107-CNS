#include <stdio.h>
#include <string.h>

int main() {
    char p[100], c[100];
    int a, b, i;

    printf("Enter plaintext: ");
    scanf("%s", p);

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    for (i = 0; p[i] != '\0'; i++)
        c[i] = ((a * (p[i] - 'A') + b) % 26) + 'A';

    c[i] = '\0';

    printf("Ciphertext: %s\n", c);

    return 0;
}
