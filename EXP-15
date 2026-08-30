#include <stdio.h>
#include <string.h>

int main() {

    char cipher[100];
    int key,i,j;

    printf("Enter Ciphertext: ");
    scanf("%s",cipher);

    printf("\nTop 10 Possible Plaintexts\n\n");

    for(key=0;key<10;key++)
    {
        printf("Key %d : ",key);

        for(i=0;cipher[i]!='\0';i++)
        {
            if(cipher[i]>='A' && cipher[i]<='Z')
            {
                char ch=((cipher[i]-'A'-key+26)%26)+'A';
                printf("%c",ch);
            }
            else if(cipher[i]>='a' && cipher[i]<='z')
            {
                char ch=((cipher[i]-'a'-key+26)%26)+'a';
                printf("%c",ch);
            }
            else
                printf("%c",cipher[i]);
        }

        printf("\n");
    }

    return 0;
}
