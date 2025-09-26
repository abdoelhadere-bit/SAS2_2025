#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main() {
    char caracter_1[Max], caracter_2[Max], car_fus[Max];
    int i=0;
    int test=0;
    
    printf("Saisie une chaine de caractère : \n");
    scanf("%[^\n]", caracter_1);
    // printf("%s\n", caracter_1);
    getchar();
    
    printf("Saisie une chaine de caractère : \n");
    scanf("%[^\n]", caracter_2);
    // printf("%s\n", caracter_2);
    int len = strlen(caracter_1)+strlen(caracter_2);
    for (int i=0; i<len;i++){
        if(i<strlen(caracter_1)) car_fus[i]=caracter_1[i];
        else car_fus[i]=caracter_2[i-strlen(caracter_1)];
        }
    printf("%s", car_fus);
    return 0;
}