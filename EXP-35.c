#include <stdio.h>
#include <string.h>

int main() {
    char p[100], c[100];
    int key[100], n, i;

    printf("Enter plaintext: ");
    scanf("%s", p);

    n = strlen(p);

    printf("Enter key numbers:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &key[i]);

    for (i = 0; i < n; i++)
        c[i] = ((p[i] - 'A') + key[i]) % 26 + 'A';

    c[n] = '\0';

    printf("Ciphertext: %s\n", c);

    return 0;
}
