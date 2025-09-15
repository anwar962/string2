#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
   void tolowerminuscule(char *chaine){

    for(int i=0;chaine[i]!='\0';i++){
        chaine[i]=tolower(chaine[i]);
    }
    }

    int main(){

    char chaine[50];
    printf("entrez une chaine:");
    fgets(chaine,50,stdin);
    tolowerminuscule(chaine);
    printf("la chaine en minscule est:%s",chaine);

    return 0;
    }
