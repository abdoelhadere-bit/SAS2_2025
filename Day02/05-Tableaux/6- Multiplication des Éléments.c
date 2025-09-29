// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int dim, facteur;
    printf("Donner le nombre d'éléments d'un tableau : \n");
    scanf("%d", &dim);
    printf("Donner le facteur : \n");
    scanf("%d", &facteur);
    int tab[dim];
    printf("saisir ces éléments : \n");

    for(int i=0;i<dim;i++){
        scanf("%d",&tab[i]);
        tab[i]*=facteur;
    }
    printf("La multiplication des elements du tableau :\n");
    for(int i=0;i<dim;i++){
        printf("%d\n",tab[i]);
    }
}