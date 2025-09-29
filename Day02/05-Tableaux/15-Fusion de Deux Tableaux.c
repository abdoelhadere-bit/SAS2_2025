#include <stdio.h>

void main() {
    int dim1, dim2, dim;
    
    printf("Donner le nombre d'éléments du premier tableau : \n");
    scanf("%d", &dim1);
    printf("Donner le nombre d'éléments du deuxième tableau : \n");
    scanf("%d", &dim2);
    dim = dim1 + dim2;
    
    int tab1[dim1],tab2[dim2];
    int tab[dim];
    
    printf("saisir les éléments du premier tableau : \n\n");
    for(int i=0;i<dim1;i++){
        scanf("%d",&tab1[i]);
    }
    
    printf("\nsaisir les éléments du deuxième tableau : \n\n");
    for(int i=0;i<dim2;i++){
        scanf("%d",&tab2[i]);
    }
    printf("Tableau fusioné : \n");
    for(int i=0;i<dim;i++){
        if(i<dim1){
            tab[i] = tab1[i];
            // printf("%d  ",tab1[i]);
        }else{
            tab[i] = tab2[i-dim1];

            // printf("%d  ",tab2[i-dim1]);
        }
    }
    for(int i=0;i<dim;i++){
        printf("%d  ", tab[i]);
    }
         

}