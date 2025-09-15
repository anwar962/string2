#include <stdio.h>
#include <string.h>
  void supprimerponctuation()
{
    int n = 0;
    char chaine [100];
    for(int i = 0 ; chaine[i] !='\0'  ; i++ )
    {
        if(chaine[i] != '!' && chaine[i] != '?' && chaine[i] != '.' && chaine[i] != ',' && chaine[i] != ';' && chaine[i] != ':')
        {
            chaine[n++] = chaine[i];
        }
    }
    chaine[n] = '\0';
    printf("%s" , chaine);
}
int main (){
    char chaine[50];
 printf ("entrez une chaine:");
  fgets(chaine,50,stdin);
    supprimerponctuation(chaine);

    return 0;
}
