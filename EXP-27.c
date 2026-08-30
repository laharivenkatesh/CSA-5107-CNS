#include <stdio.h>
long long modpow(long long a, long long e, long long n) {
    long long r = 1;
    while(e--) r = (r * a) % n;
    return r;
}
int main() {
    long long n, e, c, m;
    printf("Enter n and e: ");
    scanf("%lld%lld", &n, &e);
    printf("Encrypted character: ");
    scanf("%lld", &c);
    /* Try all 26 possible plaintext letters */
    for(m = 0; m < 26; m++)
        if(modpow(m, e, n) == c)
            printf("Plaintext = %lld\n", m);
    return 0;
}
