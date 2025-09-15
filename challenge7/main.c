#i0nclude <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char chaine [100];
  printf("entrez une chaine:");
  fgets(chaine,100,stdin);
  for(int i=0;chaine [i]!='\0';i++){

    chaine [i]=toupper(chaine[i]);
  }
  printf("le texte en majuscule est:%s\n",chaine);

  return 0;
}

