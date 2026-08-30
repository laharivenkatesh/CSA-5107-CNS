#include <stdio.h>
#include <string.h>

#define BS 8

void pad(char *p) {
    int n = strlen(p);
    p[n++] = '1';
    while(n % BS) p[n++] = '0';
    p[n] = '\0';
}

int main() {
    char p[100];
    int i, k = 7, iv = 5;

    printf("Enter plaintext: ");
    scanf("%s", p);

    pad(p);

    printf("\nPadded: %s\n", p);

    printf("\nECB: ");
    for(i=0; p[i]; i++)
        printf("%02X ", p[i] ^ k);

    printf("\nCBC: ");
    for(i=0; p[i]; i++) {
        iv = (p[i] ^ iv);
        printf("%02X ", iv ^ k);
    }

    printf("\nCFB: ");
    iv = 5;
    for(i=0; p[i]; i++) {
        int c = p[i] ^ (iv ^ k);
        printf("%02X ", c);
        iv = c;
    }

    return 0;
}
