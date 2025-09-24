#include <stdio.h>

void main() {
    int a;
    printf("Entrez un nombre : \n");
    scanf("%d", &a);
    if(a%2==0){
        printf("%d est un nombre paire.");
    }else{
        printf("%d est un nombre impaire.");
    }

}