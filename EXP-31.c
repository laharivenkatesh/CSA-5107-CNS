#include <stdio.h>
#include <stdint.h>

uint64_t leftshift(uint64_t x) {
    return x << 1;
}

int main() {
    uint64_t L = 0x123456789ABCDEF0;
    uint64_t K1, K2;

    K1 = leftshift(L);

    if (L & 0x8000000000000000ULL)
        K1 ^= 0x87;     // 128-bit CMAC constant

    K2 = leftshift(K1);

    if (K1 & 0x8000000000000000ULL)
        K2 ^= 0x87;

    printf("K1 = %llX\n", K1);
    printf("K2 = %llX\n", K2);

    return 0;
}
