#include <stdio.h>

int main() {
    int rate = 1024;
    int state[1600] = {0};
    int capacity = 1600 - rate;
    int lanes = capacity / 64;
    int blocks = 0, i;

    /* Assume each lane of P0 has a nonzero bit */
    for (i = 0; i < lanes; i++)
        state[rate + i * 64] = 1;

    while (1) {
        blocks++;

        for (i = 0; i < lanes; i++)
            if (state[rate + i * 64] == 0)
                state[rate + i * 64] = 1;

        int all = 1;
        for (i = 0; i < lanes; i++)
            if (state[rate + i * 64] == 0)
                all = 0;

        if (all) break;
    }

    printf("Blocks required = %d\n", blocks);
    return 0;
}
