// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int dim, temp;
    printf("Donner le nombre d'éléments d'un tableau : \n");
    scanf("%d", &dim);

    int tab[dim];
    int tab_copie[dim];
    printf("saisir ces éléments : \n");

    for(int i=0;i<dim;i++){
        scanf("%d",&tab[i]);
    }
    printf(" les éléments du tableau original : \n");
    for(int i=0;i<dim;i++){
    printf("%d\n",tab[i]);
    }
    printf(" les éléments du tableau copié  : \n");

    for(int i=0;i<dim;i++){
    printf("%d\n",tab_copie[i]=tab[i]);
    }
}