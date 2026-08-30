#include <stdio.h>

int main() {
    int P[24]={0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,
               0,0,0,0,0,1,0,0};
    int K[10]={0,1,1,1,1,1,1,1,0,1};
    int C[24], D[24], i, counter=0;

    /* CTR Encryption */
    for(i=0;i<24;i++) {
        C[i] = P[i] ^ ((counter >> (7-(i%8))) & 1);
        if(i%8==7) counter++;
    }

    printf("Ciphertext: ");
    for(i=0;i<24;i++) printf("%d",C[i]);

    /* CTR Decryption */
    counter=0;
    for(i=0;i<24;i++) {
        D[i] = C[i] ^ ((counter >> (7-(i%8))) & 1);
        if(i%8==7) counter++;
    }

    printf("\nDecrypted:  ");
    for(i=0;i<24;i++) printf("%d",D[i]);

    return 0;
}
