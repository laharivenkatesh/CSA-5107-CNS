#include <stdio.h>

int main() {
    int message = 100;
    int k1 = 7, k2 = 13;

    int sig1 = (message + k1) % 101;
    int sig2 = (message + k2) % 101;

    printf("Message = %d\n", message);
    printf("Signature 1 = %d\n", sig1);
    printf("Signature 2 = %d\n", sig2);

    if (sig1 != sig2)
        printf("Same message gives different signatures.\n");

    return 0;
}
