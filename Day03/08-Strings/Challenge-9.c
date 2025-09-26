#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char car[20];
    printf("Entre : ");
    // gets(car);
    fgets(car, sizeof(car), stdin);
    car[strcspn(car, "\n")]=='\0';
    // scanf("%[^\n]", car);
    printf("%s", car);

    int j=0;
    for(int i=0;i<strlen(car); i++){
        if(car[i] !=  ' '){
            car[j]=car[i];
            j++;

        }
    }
    for(int i=0;i<j;i++){
        printf("%c", car[i]);

    }
    return 0;
}
