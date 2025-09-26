#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char C[30];

    printf("entre :");
    scanf("%[^\n]",C);

    for (int i = 0 ; i < strlen(C) ; i++){

        if (C[i]>='a' && C[i]<= 'z' ){
            C[i]=C[i]-('a'-'A');
        }
    }
    printf("%s",C);

    return 0;
}