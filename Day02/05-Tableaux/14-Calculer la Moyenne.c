#include <stdio.h>

void main() {
    int dim, som=0;
    double myn;
    printf("Donner le nombre d'éléments d'un tableau : \n");
    scanf("%d", &dim);

    int tab[dim];
    printf("saisir ces éléments : \n\n");

    for(int i=0;i<dim;i++){
        scanf("%d",&tab[i]);
    }
    for(int i=0;i<dim;i++){
        som += tab[i];
    }
    myn=som/dim;
    printf("\nLa moyenne des elements est : %.2f\n", myn);

}