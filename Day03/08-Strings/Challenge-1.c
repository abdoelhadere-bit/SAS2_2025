#include <stdio.h>
#include <stdlib.h>
#define Max 100
int main() {
    char caracter[Max];
    printf("Saisie une chaine de caractère : \n");
    scanf("%[^\n]", caracter);
    printf("%s", caracter);
    return 0;
}