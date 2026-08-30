#include <stdio.h>
#include <string.h>

int main() {
    char p[100], c[100], key[20], iv[20];
    int i;

    printf("Enter plaintext: ");
    scanf("%s", p);

    printf("Enter key: ");
    scanf("%s", key);

    printf("Enter IV: ");
    scanf("%s", iv);

    /* CBC Encryption */
    for(i = 0; p[i] != '\0'; i++) {
        if(i == 0)
            c[i] = p[i] ^ iv[i];
        else
            c[i] = p[i] ^ c[i-1];

        c[i] = c[i] ^ key[i % strlen(key)];
    }

    c[i] = '\0';

    printf("Ciphertext: ");
    for(i = 0; c[i] != '\0'; i++)
        printf("%02X ", (unsigned char)c[i]);

    return 0;
}
