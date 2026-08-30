#include <stdio.h>

int main() {
    char text[500];
    int freq[26] = {0};
    int i;

    printf("Enter ciphertext: ");
    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i]; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z')
            freq[text[i] - 'A']++;
        if (text[i] >= 'a' && text[i] <= 'z')
            freq[text[i] - 'a']++;
    }

    printf("\nLetter frequencies:\n");

    for (i = 0; i < 26; i++)
        printf("%c : %d\n", 'A' + i, freq[i]);

    printf("\nMost frequent letters are possible E/T/A/O.\n");

    return 0;
}
