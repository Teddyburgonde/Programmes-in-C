#include <stdio.h>
#include <stdlib.h>

int main()
{
    //allocation dynamique de la mémoire
    int* age = (int*)malloc(sizeof(int));

    //gestion des erreurs
    if(age == NULL)
        return -1;

    //lecture de l'age
    printf("Quel est votre age? ");
    scanf("%d", age);

    //affichage du resultat
    printf("\tVous avez %d ans", *age);

    //liberation de la mémoire
    free(age);

    return 0;
}
