#include <stdio.h>

int main() {
    int n = 3599, e = 31;
    int p, q, phi, d, i;

    /* Find p and q */
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            p = i;
            q = n / i;
            break;
        }
    }

    phi = (p - 1) * (q - 1);

    /* Find d: (d * e) mod phi = 1 */
    for(d = 1; d < phi; d++)
        if((d * e) % phi == 1)
            break;

    printf("p = %d\nq = %d\n", p, q);
    printf("phi(n) = %d\n", phi);
    printf("Private key d = %d\n", d);

    return 0;
}
