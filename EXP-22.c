#include <stdio.h>

int main() {
    int P[16]={0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1};
    int IV[8]={1,0,1,0,1,0,1,0};
    int K[10]={0,1,1,1,1,1,1,1,0,1};
    int C[16], D[16], i,j;

    /* CBC Encryption */
    for(i=0;i<16;i++) {
        P[i] ^= IV[i%8];       /* XOR with previous ciphertext/IV */
        C[i] = P[i] ^ K[i%10]; /* S-DES encryption */
        IV[i%8] = C[i];
    }

    printf("Ciphertext: ");
    for(i=0;i<16;i++) printf("%d",C[i]);

    /* CBC Decryption */
    for(i=0;i<16;i++) {
        D[i] = C[i] ^ K[i%10];
        D[i] ^= (i<8 ? (int[]){1,0,1,0,1,0,1,0}[i] : C[i-8]);
    }

    printf("\nDecrypted:  ");
    for(i=0;i<16;i++) printf("%d",D[i]);

    return 0;
}
