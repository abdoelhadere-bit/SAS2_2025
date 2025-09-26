#include <stdio.h>
#include <stdlib.h>
#define Max 100
int main() {
    char caracter[Max];
    int i=0;
    int len=0;
    printf("Saisie une chaine de caractère : \n");
    scanf("%[^\n]", caracter);
    // printf("%s", caracter);
    while(caracter[i] != '\0'){
        len++;
        i++;
    }
    printf("La longueur d'une chaîne de caractères est : %d", len);
    return 0;
}