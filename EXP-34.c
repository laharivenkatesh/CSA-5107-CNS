#include <stdio.h>

void pad(char *msg, int n) {
    msg[n] = '1';
    msg[n + 1] = '\0';
}

int main() {
    char message[100] = "HELLO";
    int length = 5;

    printf("Original: %s\n", message);

    pad(message, length);

    printf("Padded  : %s\n", message);

    printf("\nModes:\n");
    printf("ECB: Encrypt each block independently\n");
    printf("CBC: XOR block with previous ciphertext\n");
    printf("CFB: Encrypt previous ciphertext and XOR with plaintext\n");

    printf("\nPadding a complete block prevents ambiguity\n");
    printf("between a message ending in padding and a message ending naturally.\n");

    return 0;
}
