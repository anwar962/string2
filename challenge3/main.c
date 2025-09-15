
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){

    char chaine1[100];
    char chaine2[50];

    printf("entrez la chaine 1:");
    fgets(chaine1,100,stdin);


    printf("entrez la chaine2:");
    fgets(chaine2,50,stdin);


    strcat(chaine1,chaine2);

    printf("la chaine1 apres combinaison est:%s\n",chaine1);


    return 0;
}

