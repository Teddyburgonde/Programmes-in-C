#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100

int main()
{
    //allocation de la string
    int taille = TAILLE_MAX;
    char* nom = (char*)malloc(sizeof(char) * taille);
    if(nom == NULL)
        return -2;

    //lecture saisie utilisateur
    printf("Quel est votre nom? ");
    if(fgets(nom, TAILLE_MAX, stdin) == NULL)
        return -1;

    taille = strlen(nom) -1;
    nom[taille] = '\0';

    //réallocation de la mémoire
    nom = realloc(nom, (taille+1) * sizeof(char) );

    //affichage du resultat
    printf("\t-%s\n", nom);
    printf("\t-%d caractères\n", taille);
    printf("\t-%d octets", sizeof(char) * (taille+1) );

    return 0;
}
