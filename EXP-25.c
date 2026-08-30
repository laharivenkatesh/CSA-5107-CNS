#include <stdio.h>

int gcd(int a, int b) {
    while(b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int n, e, m, p, q, phi, d;

    printf("Enter n and e: ");
    scanf("%d%d", &n, &e);

    printf("Enter plaintext block: ");
    scanf("%d", &m);

    p = gcd(m, n);

    if(p == 1) {
        printf("No useful information found.\n");
    } else {
        q = n / p;
        phi = (p - 1) * (q - 1);

        for(d = 1; d < phi; d++)
            if((d * e) % phi == 1)
                break;

        printf("p = %d, q = %d\n", p, q);
        printf("Private key d = %d\n", d);
    }

    return 0;
}
