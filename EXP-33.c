#include <stdio.h>
#include <stdint.h>

uint64_t encrypt(uint64_t data, uint64_t key) {
    return data ^ key;
}

uint64_t decrypt(uint64_t data, uint64_t key) {
    return data ^ key;
}

int main() {
    uint64_t plaintext = 0x123456789ABCDEF0;
    uint64_t key = 0x133457799BBCDFF1;
    uint64_t cipher, recovered;

    cipher = encrypt(plaintext, key);
    recovered = decrypt(cipher, key);

    printf("Plaintext  : %llX\n", plaintext);
    printf("Ciphertext : %llX\n", cipher);
    printf("Decrypted  : %llX\n", recovered);

    return 0;
}
