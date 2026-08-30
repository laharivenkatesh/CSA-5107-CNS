#include <stdio.h>
#include <string.h>

int main() {
    char text[100], key[100];
    int i, j = 0;

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter key: ");
    scanf("%s", key);

    for(i = 0; text[i]; i++) {
        text[i] = ((text[i] - 'A') + (key[j] - 'A')) % 26 + 'A';
        j = (j + 1) % strlen(key);
    }

    printf("Encrypted text: %s", text);

    return 0;
}
