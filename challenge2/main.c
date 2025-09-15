#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char chaine [50];
    int n;
    printf("entrez une chaine:");
    fgets(chaine,50,stdin);

    for (int i=0;chaine[i]!='\0';i++){

        n++;
    }

        n--;

   printf("la longueur de la chaine est:%d",n);


    return 0;
}
