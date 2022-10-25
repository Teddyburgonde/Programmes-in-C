#include <stdio.h>
#include <stdlib.h>

int min(int, int);
int max(int, int);

int main()
{
    int nombre1 = 9;
    int nombre2 = 12;

    int minimun = min(nombre1, nombre2);
    int maximun = max(nombre1, nombre2);

    printf("Le min de %d et %d est %d\n", nombre1, nombre2, minimun);
    printf("Le max de %d et %d est %d\n", nombre1, nombre2, maximun);

    return 0;
}

int min( int var1, int var2)
{
    if(var1 <= var2) return var1;
    else return var2;
}


int max( int var1, int var2)
{
    if(var1 >= var2) return var1;
    else return var2;
}

