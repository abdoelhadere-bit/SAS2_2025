// Online C compiler to run C program online
#include <stdio.h>

void main() {
    double a, b,c, pon;
    printf("Entrez trois nombres  : \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    pon = ((a*2)+(b*3)+(c*5))/10;
    printf("la moyenne pondérée de trois nombres donnés : %.2f", pon);
}