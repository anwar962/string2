

int main() {
    char phrase[] = "Le chat noir dort Le chien joue Le chat noir";
    struct Mot mots[20];
    int nbMots = 0;

    char *tok = strtok(phrase, " ");

    while(tok != NULL) {
        int trouve = 0;
        for(int i = 0; i < nbMots; i++) {
            if(strcmp(mots[i].texte, tok) == 0) {
                mots[i].count++;
                trouve = 1;
                break;
            }
        }
        if(!trouve) {
            strcpy(mots[nbMots].texte, tok);
            mots[nbMots].count = 1;
            nbMots++;
        }
        tok = strtok(NULL, " ");
    }

    for(int i = 0; i < nbMots; i++) {
        printf("%s: %d\n", mots[i].texte, mots[i].count);
    }

    return 0;
}
