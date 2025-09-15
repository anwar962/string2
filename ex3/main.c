#include <stdio.h>
#include <string.h>

int main() {
    char texte[] = "Le chat noir dort Le chien joue";
    char *mot = strtok(texte, " ");
    int comp = 0;

    while(mot != NULL) {
        comp++;
        mot = strtok(NULL, " ");
    }

    printf("%d mots", comp);

    return 0;
}
