#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAILLE = 4;
    int matrice_unitaire[TAILLE][TAILLE];


    for(int i = 0; i < TAILLE; i++)
    {
        for(int j = 0; j <TAILLE; j++)
        {
            if(i == j)
                matrice_unitaire[i][j] = 1;
            else
                matrice_unitaire[i][j] = 0;
        }
    }

    //affichage resultat
    for(int i = 0; i <TAILLE; i++)
    {
        for(int j = 0; j <TAILLE; j++)
        {
            printf("%d ", matrice_unitaire[i][j]);
        }
        putchar('\n');
    }

    return 0;
}


