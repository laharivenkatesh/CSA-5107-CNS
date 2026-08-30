#include <stdio.h>

long long power(long long a, long long b, long long q) {
    long long r = 1;
    while(b--)
        r = (r * a) % q;
    return r;
}

int main() {
    long long a, q, x, y, A, B, K1, K2;

    printf("Enter public a and q: ");
    scanf("%lld%lld", &a, &q);

    printf("Enter Alice secret x: ");
    scanf("%lld", &x);

    printf("Enter Bob secret y: ");
    scanf("%lld", &y);

    /* Normal Diffie-Hellman */
    A = power(a, x, q);
    B = power(a, y, q);

    K1 = power(B, x, q);
    K2 = power(A, y, q);

    printf("Alice sends: %lld\n", A);
    printf("Bob sends: %lld\n", B);
    printf("Alice key = %lld\n", K1);
    printf("Bob key   = %lld\n", K2);

    return 0;
}
