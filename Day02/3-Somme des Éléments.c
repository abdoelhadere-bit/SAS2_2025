#include <stdio.h>

void main() {
    int dim, somme=0;
    printf("Donner le nombre d'éléments d'un tableau : \n");
    scanf("%d", &dim);
    int tab[dim];
    printf("saisir ces éléments : \n");

    for(int i=0;i<dim;i++){
        scanf("%d",&tab[i]);
        somme+=tab[i];
    }
    printf("Tes elements :\n");
    for(int i=0;i<dim;i++){
        printf("%d\n",tab[i]);
    }
    printf("La somme des elements : %d", somme);
}