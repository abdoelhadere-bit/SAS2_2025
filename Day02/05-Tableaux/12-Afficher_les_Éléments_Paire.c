#include <stdio.h>

void main() {
    int dim, vlr,new_vlr;
    printf("Donner le nombre d'éléments d'un tableau : \n");
    scanf("%d", &dim);

    int tab[dim];
    printf("saisir ces éléments : \n\n");

    for(int i=0;i<dim;i++){
        scanf("%d",&tab[i]);
    }
    printf("Les nombres paires : \n");
    for(int i=0;i<dim;i++){
        if(tab[i]%2==0)
        printf("%d\n", tab[i]);
    }
}