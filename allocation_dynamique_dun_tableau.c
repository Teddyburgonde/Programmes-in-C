#include <stdio.h>
#include <stdlib.h>

int main()
{
    //lecture taille
    int taille;

    printf("Taille du tableau? ");
    scanf("%d", &taille);
    if(taille <= 0)
        return -1;

    //allocation dynamique d'un tableau
    int* tab = (int*)malloc(sizeof(int) * taille);
    //gestion d'erreur
    if(tab == NULL)
        return -2;

    //remplissage du tableau
    for(int i = 0; i < taille; i++)
    {
        printf("tab[%d] = ", i);
        scanf("%d", (tab+i));
    }

    //affichage du contenu
    printf("tab = {");
    for(int i = 0; i < taille; i++)
    {
        if(i < taille-1)
            printf("%d, ", tab[i]);
        else
            printf("%d} ", tab[i]);
    }

    //libération de la mémoire
    free(tab);

    return 0;
}
