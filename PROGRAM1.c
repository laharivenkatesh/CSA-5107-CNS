#include <stdio.h>

int main() {
    char s[100];
    int k, i;

    printf("Enter text: ");
    scanf(" %[^\n]", s);

    printf("Enter key: ");
    scanf("%d", &k);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (s[i] - 'A' + k) % 26 + 'A';
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = (s[i] - 'a' + k) % 26 + 'a';
    }

    printf("Encrypted text: %s\n", s);

    return 0;
}
