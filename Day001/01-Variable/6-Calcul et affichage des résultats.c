#include <stdio.h>

void main() {
    double a, b, so, mul, sub, divi;
    printf("Entrez deux nombres reelles : \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    so=a+b;
    mul=a*b;
    sub = a-b;
  
 
    printf("%lf + %lf = %.2f\n", a,b,so);
    printf("%lf * %lf = %.2f\n", a,b,mul);
    printf("%lf - %lf = %.2f\n", a,b,sub);
    sub = a-b;
    if(b=0){
        divi = a/b;
    }else{
        printf("Division impossible !!!!\n");
    };
    printf("%lf / %lf = %.2f\n", a,b,divi);


