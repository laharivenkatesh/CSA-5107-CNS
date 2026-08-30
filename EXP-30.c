#include <stdio.h>

int main() {
    int X = 10;
    int T = 25;       // MAC(K,X)
    int forged;

    forged = X ^ T;

    printf("MAC of X = %d\n", T);
    printf("Second block = X XOR T = %d\n", forged);
    printf("Forged message: X || (X XOR T)\n");

    return 0;
}
