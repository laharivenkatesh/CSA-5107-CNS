#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

/* English letter frequency */
double freq[26] = {
    8.2, 1.5, 2.8, 4.3, 12.7, 2.2, 2.0, 6.1, 7.0,
    0.8, 0.8, 4.0, 2.4, 6.7, 7.5, 1.9, 0.1, 6.0,
    6.3, 9.1, 2.8, 1.0, 2.4, 0.2, 2.0, 0.1
};

int main() {
    char cipher[MAX], result[MAX];
    int count[26] = {0};
    int map[26];
    int n, i, j, temp;

    printf("Enter ciphertext: ");
    fgets(cipher, MAX, stdin);

    /* Count letters */
    for (i = 0; cipher[i] != '\0'; i++) {
        if (isalpha(cipher[i]))
            count[tolower(cipher[i]) - 'a']++;
    }

    /* Create frequency order of cipher letters */
    for (i = 0; i < 26; i++)
        map[i] = i;

    for (i = 0; i < 25; i++) {
        for (j = i + 1; j < 26; j++) {
            if (count[map[i]] < count[map[j]]) {
                temp = map[i];
                map[i] = map[j];
                map[j] = temp;
            }
        }
    }

    printf("Enter number of possible plaintexts: ");
    scanf("%d", &n);

    printf("\nPossible Plaintexts:\n");

    /* Generate candidates by shifting frequency mapping */
    for (int k = 0; k < n; k++) {

        for (i = 0; i < 26; i++)
            result[i] = '\0';

        for (i = 0; cipher[i] != '\0'; i++) {
            if (isalpha(cipher[i])) {
                int c = tolower(cipher[i]) - 'a';

                /* Map frequent cipher letters to frequent English letters */
                int rank = 0;
                for (j = 0; j < 26; j++) {
                    if (map[j] == c) {
                        rank = j;
                        break;
                    }
                }

                int p = ('e' - 'a' + rank + k) % 26;
                result[i] = 'a' + p;

                if (isupper(cipher[i]))
                    result[i] = toupper(result[i]);
            } else {
                result[i] = cipher[i];
            }
        }

        printf("%d. %s", k + 1, result);
    }

    return 0;
}
