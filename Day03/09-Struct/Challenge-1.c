#include <stdio.h>
#include <stdlib.h>

struct Contact {
    char nom[50];
    char prenom[100];
    int age;

};
int main() {
    struct Contact C;
    strcpy(C.prenom, "Abdo");
    printf("Prenom : %s\n", C.prenom);
    strcpy(C.nom, "Elhadere");
    printf("Nom : %s\n", C.nom);
    C.age = 30;
    printf("Age : %d\n", C.age);


    return 0;
}
