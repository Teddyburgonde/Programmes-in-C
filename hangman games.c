#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int nb_vies = 10;
    char saisie_utilisateur = ' ';

    char mot_secret[] = "PROGRAMMATION";
    int taille_mot = strlen(mot_secret);

    char mot_trouve[taille_mot+1];
    for(int i = 0; i < taille_mot; i++) mot_trouve[i]= '-';
    mot_trouve[taille_mot] = '\0';

    do
    {
        //saisie utilisateur
        printf("Propose une lettre > ");
        scanf(" ");
        scanf("%c", &saisie_utilisateur);

        //recherche lettre
        int lettre_presente = 0;
        for(int i = 0; i  < taille_mot; i++)
        {
            if(mot_secret[i] == saisie_utilisateur)
            {
                lettre_presente = 1;
                mot_trouve[i] = saisie_utilisateur;
            }
        }
            //affichage resultat
            if(lettre_presente)
            {

                printf("Oui , la lettre '%c' est bien présente dans le mot\"%s\" \n", saisie_utilisateur, mot_trouve);
            }
            else
            {
                nb_vies--;
                printf("Non, la lettre '%c' n'est pas présente dans le mot\"%s\" \n", saisie_utilisateur, mot_trouve);
            }
            //test de victoire
            if(strcmp(mot_secret, mot_trouve) == 0 )
            {
                printf("Bravos, vous avez trouve le mot \"%s\" et il vous reste %d vies", mot_secret, nb_vies);
                break;
            }

    }while(nb_vies > 0);

            if(nb_vies == 0)
                printf("dommage, vous avez perdu. Le mot secret était \"%s\"", mot_secret);

    return 0;
}
