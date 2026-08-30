#include <stdio.h>
#include <string.h>

int main() {
    char c[500], p[500];
    int shift, i;

    printf("Enter ciphertext: ");
    fgets(c, sizeof(c), stdin);

    printf("Enter guessed shift: ");
    scanf("%d", &shift);

    for (i = 0; c[i]; i++) {
        if (c[i] >= 'A' && c[i] <= 'Z')
            p[i] = (c[i] - 'A' - shift + 26) % 26 + 'A';
        else
            p[i] = c[i];
    }

    p[i] = '\0';

    printf("Possible plaintext: %s", p);

    return 0;
}
