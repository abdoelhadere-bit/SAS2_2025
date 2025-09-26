#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct Etudiant {
    char nom[50];
    char prenom[100];
    int note[20];
};

int main() {
    struct Etudiant e ;

    //struct Etudiant e = {"Abdo", "Elhadere", {10, 15, 11, 16}} ;
    strcpy(e.prenom, "Abdo");
    printf("Prenom : %s\n", e.prenom);
    strcpy(e.nom, "Elhadere");
    printf("Nom : %s\n", e.nom);
    e.note[0]= 10;
    e.note[1]= 15;
    e.note[2]= 11;
    e.note[3]= 16;
    printf("==Les notes==\n");
    for (int i=0; i<4;i++){
        printf("Note %d : %d\n",i+1, e.note[i]);
    }


    return 0;
}
