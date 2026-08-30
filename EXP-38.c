#include <stdio.h>

int main() {
    int P[2][2] = {{1, 2}, {3, 5}};
    int C[2][2] = {{5, 8}, {11, 18}};
    int i, j, k;

    printf("Known Plaintext:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", P[i][j]);
        printf("\n");
    }

    printf("\nCiphertext:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    printf("\nUsing enough plaintext-ciphertext pairs,\n");
    printf("the Hill cipher key matrix can be recovered.\n");

    return 0;
}
