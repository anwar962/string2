

#include <stdio.h>
#include <string.h>

void inverser_chaine(char str[]) {
    int debut = 0;
    int fin = strlen(str) - 1;

    while(debut < fin) {
        char temp = str[debut];
        str[debut] = str[fin];
        str[fin] = temp;
        debut++;
        fin--;
    }
}

int main() {
    char mot[100];

    printf("Entrez un mot: ");
    scanf("%s", mot);

    inverser_chaine(mot);
    printf("Inverse: %s", mot);

    return 0;
}

