#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void main() {
    char titre[100][50];
    char auteur[100][50];
    double prix[100];
    int quantite[100];
    int count=0;
    int i=0;
    char y_n;
    int choix;
    char vlr_rechrche[50];
    int new_quentite;
    do {
    printf("=== Système de Gestion de Stock dans une Librairie ===\n\n");
    printf("1-Pour Ajouter un livre au stock\n");
    printf("2-Pour Afficher tous les livres disponibles\n");
    printf("3-Mettre à jour la quantité d'un livre\n");
    printf("4-Pour Supprimer un livre du stock\n");
    printf("5-Pour Afficher le nombre total de livres en stock\n");
    printf("6-Pour Quitter\n");
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            do{
                getchar();
                printf("Entre le titre de livre : ");
                scanf("%[^\n]",titre[i]);
                
                printf("\n");
        
                printf("Entre l'auteur de livre : ");
                getchar();
                scanf("%[^\n]",auteur[i]);
                printf("\n");
        
                printf("Entre le prix de livre : ");
                scanf("%lf",&prix[i]);
                printf("\n");
        
                printf("Entre l'quantite de livre : ");
                scanf("%d",&quantite[i]);
                printf("\n");
        
                // printf("%s, ",auteur[i]);
                // printf("%s, ",titre[i]);
                // printf("%.2f, ",prix[i]);
                // printf("%d, ",quantite[i]);
        
                getchar();
                printf("\nest ce que voulez  ajouter un autre livre: (Y / N)... \n");
                scanf("%c",&y_n);
                y_n = toupper(y_n);
        
                i++;
                count++;
                getchar();
            }while(y_n == 'Y');
            break;
        case 2:
            for(int i=0; i<count;i++){
                printf("----------------------\n");
                printf("Livre %d : \n", i+1);
                printf(" Titre : %s\n Auteur : %s\n Prix : %.2f\n Quentité : %d\n",titre[i], auteur[i], prix[i], quantite[i]);
            }
            printf("\n\n");
            break;
        case 3:
            int test = 0;
            printf("Quel livre voulez vous mettre à jour ?\n");
            getchar();
            scanf("%[^\n]",vlr_rechrche);

            for(int i=0; i<count;i++){
                if (strcmp(vlr_rechrche, titre[i]) == 0){
                    printf("Quel est la nouvelle quentité : \n");
                    getchar();
                    scanf("%d",&new_quentite);
                    quantite[i]=new_quentite;
                    printf("La nouvelle quentité du livre est : %d\n\n",  quantite[i]);
                    test++;
                    break;
                }
            }
            if(test==0){
                printf("Livre Introuvable !!!!!! \n\n");
            }
            
            break;
        case 4:
            int teste = 0;
            printf("Quel livre voulez vous supprimer ?\n");
            getchar();
            scanf("%[^\n]",vlr_rechrche);
            for(int i=0; i<count;i++){
                if (strcmp(vlr_rechrche, titre[i]) == 0){
                    for(int j=i;j<count;j++){
                        strcpy(titre[j], titre[j+1]);
                        strcpy(auteur[j], auteur[j+1]);
                        prix[j] = prix[j+1];
                        quantite[j] = quantite[j+1];
                    }
                teste++; 
                count--;

                }
            }
            if (teste == 0){
                printf("Valeur Introuvable !!!!!! \n\n");
            }
            break;
        case 5:
            int total=0;

                for (int i=0;i<count;i++){

                    total+=quantite[i];
                }

                printf("\n-Le nombre total de livres en stock est : %d livres\n\n",total);

                break;
        case 6:
            printf(" ______________________________\n");
            printf("|******************************|\n");
            printf("|====== A la prochaine :)======| :)\n");
            printf("|______________________________|\n");

            break;
        default:
            printf("Choix Introuvable !!!!!\n");
            printf("--- Veuiller entrer un choix valid--\n");

            break;
    }
    }while(choix != 6); 
}
