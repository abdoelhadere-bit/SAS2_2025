#include <stdio.h>
#include <string.h>

int main() {

    char C[30];

    printf("Saisie une chaine de caractère : :");
    scanf("%[^\n]",C);

    for (int i = strlen(C)-1 ; i >= 0 ; i--){

        printf("%c",C[i]);
        }

    return 0;
}