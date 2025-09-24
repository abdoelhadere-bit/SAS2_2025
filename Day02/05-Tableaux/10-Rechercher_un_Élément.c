#include <stdio.h>

void main() {
    int dim, vlr,count=0;
    printf("Donner le nombre d'éléments d'un tableau : \n");
    scanf("%d", &dim);

    int tab[dim];
    printf("saisir ces éléments : \n\n");

    for(int i=0;i<dim;i++){
        scanf("%d",&tab[i]);
    }
    printf("l éléments à rechercher : \n\n");
    scanf("%d", &vlr);
    for(int i=0;i<dim;i++){
        if(tab[i]!=vlr){
            count++;
        }else {
            printf("Ton élément est présent !!!");
        }
    }
    if(count == dim){
        printf("Ton élément n'est pas présent !!!");
    }
}