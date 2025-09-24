#include <stdio.h>
#include <stdlib.h>

int main(){
    char nom[15], prenom[15], sexe[10], email[100];
    int age;
    printf("Entrer votre nom : ");
    scanf("%s",&nom);
    printf("Entrer votre prenom : ");
    scanf("%s",&prenom);
    printf("Entrer votre age : ");
    scanf("%d",&age);
    printf("Entrer votre email : ");
    scanf("%s",&email);
    printf("Entrer votre sexe : ");
    scanf("%s",&sexe);
    printf("\n");
    printf("****Vos informations personnelles****\n");
    printf("\n");
    printf("Votre nom : %s\n", nom);
    printf("Votre prenom : %s\n", prenom);
    printf("Votre age : %d\n", age);
    printf("Votre email : %s\n", email);
    printf("Votre sexe : %s\n", sexe);



    return 0;
}