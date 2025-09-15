#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char chaine [100];
  printf("entrez une chaine:");
  fgets(chaine,100,stdin);
  for(int i=0;chaine [i]!='\0';i++){

    chaine [i]= tolower(chaine[i]);
  }
  printf("le texte en miniscule est:%s\n",chaine);

  return 0;
}
