#include <stdio.h>
#include <string.h>

int main() {
    char key[17], text[17], k[16][17];
    int i, j;

    printf("Enter key: ");
    scanf("%16s", key);

    printf("Enter ciphertext: ");
    scanf("%16s", text);

    /* Generate 16 keys */
    for(i = 0; i < 16; i++) {
        strcpy(k[i], key);

        /* Shift schedule */
        int s = (i==0 || i==1 || i==8 || i==15) ? 1 : 2;

        while(s--) {
            char c = key[0];
            memmove(key, key+1, 15);
            key[15] = c;
        }
    }

    /* DES decryption: K16 -> K1 */
    for(i = 15; i >= 0; i--)
        for(j = 0; j < 16; j++)
            text[j] ^= k[i][j];

    printf("Decrypted text: %s", text);

    return 0;
}
