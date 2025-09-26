#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char car[20];
    char sub[30];
    printf("Entre : ");
    // gets(car);

    fgets(car, sizeof(car), stdin);
    car[strcspn(car, "\n")]=='\0';

    // scanf("%[^\n]", car);
    printf("%s", car);
    printf("Entre : ");
    // gets(car);

    fgets(car, sizeof(car), stdin);
    car[strcspn(car, "\n")]=='\0';

    // scanf("%[^\n]", car);
    printf("%s", car);
    
    if(strstr(car, sub)==0){
        printf("la sous-chaîne est trouvée :)");
    }else{
        printf("la sous-chaîne n est pas trouvée :(");
    }

    return 0;
}
