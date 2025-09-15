
#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[50], chaine2[50];

    printf("Entrez la chaine1: ");
    fgets(chaine1, 50, stdin);

    printf("Entrez la chaine2: ");
    fgets(chaine2, 50, stdin);

    if(strcmp(chaine1, chaine2) == 0) {
        printf("Les chaines  sont identiques");
    } else {
        printf("Les chaines sont differentes");
    }

    return 0;
}
