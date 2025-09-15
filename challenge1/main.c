#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char chaine [50];
  printf("entrez une chaine:");
  fgets(chaine,50,stdin);
  printf("la chaine entrez est:%s",chaine);
    return 0;
}
