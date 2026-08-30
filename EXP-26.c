#include <stdio.h>

int main() {
    int p=61, q=53;
    int n=p*q, phi=(p-1)*(q-1);
    int e=17, d=1;

    /* Find private key */
    while((e*d)%phi != 1)
        d++;

    printf("Old Public Key  : (%d,%d)\n",e,n);
    printf("Old Private Key : (%d,%d)\n",d,n);

    /* Bob changes e,d but keeps same n */
    e=7;
    d=1;

    while((e*d)%phi != 1)
        d++;

    printf("\nNew Public Key  : (%d,%d)\n",e,n);
    printf("New Private Key : (%d,%d)\n",d,n);

    printf("\nSafe? NO - modulus n is unchanged.\n");

    return 0;
}
