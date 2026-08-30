#include <stdio.h>

int main() {
    char c1, c2;
    int a, b;

    printf("Enter most frequent letter: ");
    scanf(" %c", &c1);

    printf("Enter second most frequent letter: ");
    scanf(" %c", &c2);

    c1 = c1 - 'A';
    c2 = c2 - 'A';

    for (a = 1; a < 26; a++) {
        if (a % 2 != 0 && a != 13) {
            b = (c1 - 4 * a) % 26;
            if (b < 0) b += 26;

            if (((a * 19 + b) % 26) == c2) {
                printf("a = %d\nb = %d", a, b);
                break;
            }
        }
    }

    return 0;
}
