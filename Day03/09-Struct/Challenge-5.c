#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct livre {
    char titre[50];
    char auteur[50];
    int annee;
};
void my_function(char *titre, char *auteur, int annee){
    printf("%s\n", titre);
    printf("%s\n", auteur);
    printf("%d\n", annee);

}
int main() {
    struct livre p = {"book","auteur",2002};
    my_function(p.titre, p.auteur, p.annee);


}
