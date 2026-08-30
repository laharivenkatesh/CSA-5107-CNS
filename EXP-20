#include <stdio.h>

int main() {
    int P[5] = {10,20,30,40,50};
    int K = 7, IV = 5;
    int C[5], D[5], i;

    /* ECB Encryption */
    for(i=0;i<5;i++)
        C[i] = P[i] ^ K;

    printf("ECB: ");
    for(i=0;i<5;i++) printf("%d ",C[i]);

    /* CBC Encryption */
    for(i=0;i<5;i++) {
        if(i==0) C[i] = (P[i]^IV)^K;
        else C[i] = (P[i]^C[i-1])^K;
    }

    printf("\nCBC: ");
    for(i=0;i<5;i++) printf("%d ",C[i]);

    return 0;
}
