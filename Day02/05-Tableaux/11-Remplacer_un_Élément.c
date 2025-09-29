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
    printf("l éléments à remplacer : \n\n");
    scanf("%d", &vlr);
    printf("Donner le neauvau éléments : \n\n");
    scanf("%d", &new_vlr);

    for(int i=0;i<dim;i++){
        if(tab[i]==vlr){
            tab[i]=new_vlr;

    }
        
    }
    for(int i=0;i<dim;i++){
        printf("%d\n", tab[i]);
    }
}