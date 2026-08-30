#include <stdio.h>

int main() {
    char c[500];
    char freq[] = "ETAOINSHRDLCUMWFGYPBVKJXQZ";
    int count[26] = {0};
    int i, j, max, pos;
    
    printf("Enter ciphertext: ");
    fgets(c, sizeof(c), stdin);

    for (i = 0; c[i]; i++) {
        if (c[i] >= 'A' && c[i] <= 'Z')
            count[c[i] - 'A']++;
        else if (c[i] >= 'a' && c[i] <= 'z')
            count[c[i] - 'a']++;
    }

    printf("\nFrequency-based possible mapping:\n");

    for (j = 0; j < 26; j++) {
        max = -1;
        pos = -1;

        for (i = 0; i < 26; i++) {
            if (count[i] > max) {
                max = count[i];
                pos = i;
            }
        }

        if (max > 0) {
            printf("%c -> %c\n", 'A' + pos, freq[j]);
            count[pos] = -1;
        }
    }

    return 0;
}
