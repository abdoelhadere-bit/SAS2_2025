#include <stdio.h>

void main() {
    double Kil, Yards;
    printf("Entrez la distance en kilometres : ");
    scanf("%lf", &Kil);
    Yards = Kil * 1093.61;
    printf("%.2f",Yards);

}