#include <stdio.h>

char m[5][5] = {
{'M','O','N','A','R'},
{'C','H','Y','B','D'},
{'E','F','G','I','K'},
{'L','P','Q','S','T'},
{'U','V','W','X','Z'}
};

int main() {
    char a, b;
    int i, j, r1, c1, r2, c2;

    printf("Enter 2 letters: ");
    scanf(" %c%c", &a, &b);

    for(i=0;i<5;i++)
        for(j=0;j<5;j++){
            if(m[i][j]==a){r1=i;c1=j;}
            if(m[i][j]==b){r2=i;c2=j;}
        }

    if(r1==r2) printf("%c%c", m[r1][(c1+1)%5], m[r2][(c2+1)%5]);
    else if(c1==c2) printf("%c%c", m[(r1+1)%5][c1], m[(r2+1)%5][c2]);
    else printf("%c%c", m[r1][c2], m[r2][c1]);

    return 0;
}
