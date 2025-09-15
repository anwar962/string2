#include <stdio.h>

int main() {
    char chaine[50];
    char car;
    int compteur = 0;

    printf("Entrez la chaine: ");
    fgets(chaine, 50, stdin);

    printf("Entrez un caractere: ");
    scanf("%c", &car);

    for(int i=0; chaine[i] != '\0'; i++) {
        if(chaine[i] == car) {
            compteur++;
        }
    }

    printf("Le nombre des occurrences: %d", compteur);

    return 0;
}
