#include <stdio.h>

void main() {
    int dim;
    printf("Donner le nombre d'éléments d'un tableau : \n");
    scanf("%d", &dim);
    int tab[dim];
    printf("saisir ces éléments : \n");

    for(int i=0;i<dim;i++){
        scanf("%d",&tab[i]);
    }
    printf("Tes elements :\n");
    for(int i=0;i<dim;i++){
        printf("%d\n",tab[i]);
    }
}