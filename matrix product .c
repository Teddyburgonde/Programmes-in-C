#include <stdio.h>
#include <stdlib.h>

int main()
{
    //création des matrices
    int matriceA[2][3] = {
    {1, 2, 0},
    {4, 3, -1}
    };

    int matriceB[3][2] = {
    {5, 1},
    {2, 3},
    {3, 4}
    };

    for(int ligne = 0; ligne < 2; ligne++)
    {
        for(int col = 0; col < 2; col++)
        {
            int resultat = 0;
            for(int i = 0; i < 3; i++)
            {
                resultat += matriceA[ligne][i] * matriceB[i][col];
            }
            printf("%d ", resultat);
        }
        putchar('\n');
    }




    return 0;
}
