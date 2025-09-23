// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int dim, temp;
    printf("Donner le nombre d'éléments d'un tableau : \n");
    scanf("%d", &dim);

    int tab[dim];
    printf("saisir ces éléments : \n");

    for(int i=0;i<dim;i++){
        scanf("%d",&tab[i]);
    }

    for(int i=0;i<dim-1;i++){
        for(int j=i+1; j<dim;j++){
            if(tab[i]>tab[j]){
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    for(int i=0;i<dim;i++){
    printf("%d",tab[i]);
    }
}