#include <stdio.h>

void main() {
    double Kil, metre;
    printf("Entrez la vitesse en kilomètres par heure (km/h) : ");
    scanf("%lf", &Kil);
    metre = Kil * 0.27778;
    printf("%.2f",metre);

}