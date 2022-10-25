#include <stdio.h>
#include <stdlib.h>

int main() {
    //déclaration des variables
    int nombre1, nombre2, resultat;
    char operateur;
    int operateur_valide;


    //affichage utilisateur
    printf("\tBienvenue, je suis super calculator 3000\n");
    printf("- Veuillez entrer une operation\n");
    printf("- Sous le format de 1+1 sans espace\n");
    printf("- Les opérateurs disponible sont [+, -, *, /, %]\n");

    //saisie utilisateur
    scanf("%d%c%d", &nombre1, &operateur, &nombre2);

    //condition division par 0
    if( (operateur == '/') && (nombre2 == 0) ) {
        printf("La division par 0 est impossible");
    }
    else {

    //switch case operateur

        switch(operateur) {

            case '+' :
                resultat = nombre1 + nombre2;
                operateur_valide = 1;

            break;

            case '-' :
                resultat = nombre1 - nombre2;
                operateur_valide = 1;
            break;

            case '*' :
                resultat = nombre1 * nombre2;
                operateur_valide = 1;
            break;

            case '/' :
                resultat = nombre1 / nombre2;

            break;

            case '%' :
                resultat = nombre1 % nombre2;
                operateur_valide = 1;
            break;

            default :
                printf("Entrer un operateur valide\n");
                operateur_valide = 0;
            break;

        }
    }

        //affichage resultat
        if(operateur_valide)
            printf("C'est trop facile ! le resultat de %d%c%d = %d", nombre1, operateur, nombre2, resultat);

        return 0;
}
