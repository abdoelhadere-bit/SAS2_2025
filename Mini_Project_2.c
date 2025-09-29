#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTACTS 100
#define MAX_CHAR 50
int idx = -1;
int cpt=0;


struct Contact {
        char Nom[MAX_CHAR];
        char Num_Tel[MAX_CHAR];
        char Adresse[MAX_CHAR];
    };
    

    void afficherMenu() {
        printf("\n");
        printf("=========================================\n");
        printf("      Système de Gestion de Contacts      \n");
        printf("=========================================\n");
        printf(" [1] Ajouter un Contact\n");
        printf(" [2] Modifier un Contact\n");
        printf(" [3] Supprimer un Contact\n");
        printf(" [4] Afficher Tous les Contacts\n");
        printf(" [5] Rechercher un Contact\n");
        printf(" [6] Quitter\n");
        printf("=========================================\n");
        printf(" Votre choix : ");
    }

    void chercher (struct Contact *c,char *find_con){
        for(int i=0;i<cpt;i++){
            if (strcmp(c[i].Nom, find_con) ==0){
                //printf("\nNom : %s\n", c[i].Nom);
                printf("\nInformations du contact '%s' :\n\n", find_con);
                printf("    Numero de telephone : %s\n", c[i].Num_Tel);
                printf("    Adresse             : %s\n\n", c[i].Adresse);
                idx = i;
            }
        }
        if(idx==-1){
            printf("!!!  Contact Introuvable !!!\n\n");
        }
    }
     
    

    void ajouter(struct Contact *c) {
        printf("-Nom                 : ");
        scanf("%[^\n]", c->Nom);
        getchar();
        

        printf("-Numero de telephone : ");
        scanf("%[^\n]", c->Num_Tel);
        getchar();

        printf("-Adresse e-mail      : ");
        scanf("%[^\n]", c->Adresse);
        getchar();
    }

    void modifer(struct Contact *c, char *find_con, char *new_num, char *new_adr) {
        chercher (c, find_con);
        if (idx != -1) {
            printf("Entrez le nouveau numero : ");
            scanf("%[^\n]", new_num);
            getchar();

            printf("Entrez le nouveau email : ");
            scanf("%[^\n]", new_adr);
            getchar();

            strcpy(c[idx].Num_Tel, new_num);
            strcpy(c[idx].Adresse, new_adr);
            printf("\n------------------------\n");
            printf("\n-----Contact modifie----\n");
            printf("\n------------------------\n");
            printf("Numero de telephone : %s\n", c[idx].Num_Tel);
            printf("Adresse             : %s\n\n", c[idx].Adresse);
            idx=-1;
        }else{
            printf("!!!  Contact Introuvable !!!\n\n");

        }
    }

    void supprimer(struct Contact *c, char *find_con) {
        for(int i=0;i<cpt;i++){
            if (strcmp(c[i].Nom, find_con) == 0){
                idx=i;
                break;
            }
            }
        if(idx>=0){
            for (int i = idx; i < cpt; i++) {
            strcpy(c[i].Nom, c[i + 1].Nom);
            strcpy(c[i].Num_Tel, c[i + 1].Num_Tel);
            strcpy(c[i].Adresse, c[i + 1].Adresse);
            }
            printf("!!!  Contact Suprime !!!\n\n");
            cpt--;
        }else{
            printf("!!!  Contact Introuvable !!!\n\n");
        }

        idx=-1;
    }

    void afficher(struct Contact *c, int cpt) {
    if (cpt == 0) {
        printf("\n--- Aucun contact à afficher ---\n\n");
        return;
    }

    printf("\n--- Liste des Contacts ---\n\n");

    for (int i = 0; i < cpt; i++) {
        printf("Contact %d :\n", i + 1);
        printf("  Nom       : %s\n", c[i].Nom);
        printf("  Téléphone : %s\n", c[i].Num_Tel);
        printf("  Adresse   : %s\n", c[i].Adresse);
        printf("-------------------------------\n");
    }
}


    int main() {
        struct Contact contacts[MAX_CONTACTS];
        char choix;
        char y_n;
        char find_con[50];
        char new_num[50];
        char new_adr[50];

        do{
            afficherMenu();
            scanf("%c", &choix);
            getchar();

            switch(choix) {
                case '1':
                    do{
                        printf("\nLes donnees du contact %d\n", cpt+1);
                        ajouter(&contacts[cpt]);
                        printf("\n");
                        printf("Voulez vous ajouter un neauvau contact ? (Y/N)\n");
                        scanf("%c", &y_n);
                        y_n = tolower(y_n);
                        getchar();
                        cpt++;
                    }while(y_n=='y');
                    break;
                case '2':
                    printf("\nEntrez le nom du contact pour le modifier : ");
                    scanf("%[^\n]", find_con);
                    getchar();  

                    modifer(contacts, find_con, new_num, new_adr);
                    break;
                case '3':
                    printf("Enter le contact : \n");
                    scanf("%[^\n]", find_con);
                    getchar();
                    supprimer(contacts, find_con);
                    break;
                case '4':
                    afficher(contacts, cpt);
                    break;
                case '5':
                    printf("\nEntrez le nom du contact : \n");
                    scanf("%[^\n]", find_con);
                    getchar();
                    chercher(contacts, find_con);

                    break;
                case '6':
                    printf("Exiting program...\n");
                    break;
                default:
                    printf("\nInvalid choice!\n\n");
                    break;
            }
        }while(choix!='6');

        return 0;  // Now this line should work without errors
    }