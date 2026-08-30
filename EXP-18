#include <stdio.h>

int main() {
    char key[57], C[29], D[29], K[49];
    int i, j, shift;

    printf("Enter 56-bit key: ");
    scanf("%56s", key);

    /* Split key into two 28-bit parts */
    for(i = 0; i < 28; i++) {
        C[i] = key[i];
        D[i] = key[i + 28];
    }
    C[28] = D[28] = '\0';

    /* Generate 16 DES subkeys */
    for(i = 0; i < 16; i++) {
        shift = (i==0 || i==1 || i==8 || i==15) ? 1 : 2;

        /* Left shift C and D */
        for(j = 0; j < shift; j++) {
            char x = C[0], y = D[0];

            for(int k = 0; k < 27; k++) {
                C[k] = C[k+1];
                D[k] = D[k+1];
            }

            C[27] = x;
            D[27] = y;
        }

        /* Select 24 bits from each half */
        for(j = 0; j < 24; j++) {
            K[j] = C[j];
            K[j+24] = D[j];
        }
        K[48] = '\0';

        printf("K%d = %s\n", i+1, K);
    }

    return 0;
}
