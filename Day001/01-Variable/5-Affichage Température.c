#include <stdio.h>

void main() {
    double tem, metre;
    printf("Entrez la température en Celsius : ");
    scanf("%lf", &tem);
    if(tem<0){
        printf(" l état de l eau a cette temperature : 'Solide' \n");
    }else if (tem>=0 && tem<100){
        printf(" l état de l eau a cette temperature : 'Liquide' \n");
    }else{
        printf(" l état de l eau a cette temperature : 'Gaz' \n");
    }

}