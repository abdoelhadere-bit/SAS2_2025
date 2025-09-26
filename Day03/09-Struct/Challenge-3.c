#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct Rectangle {
    float longueur;
    float largeur;
};

float calcul_aire(float longueur, float largeur){
    return longueur*largeur;
}

int main() {
    struct Rectangle r ;
    r.largeur = 11.5;
    r.longueur = 11.5;
    printf(" l'aire du rectangle : %.2f", calcul_aire(r.longueur, r.largeur));
    return 0;
}
