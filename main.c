#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sommeTableau(int tableau[], int tailleTableau);

int main()
{
    int tableau[4] = {10, 20, 15};

    sommeTableau(tableau, 4);

    return 0;
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0, i = 0;
    for(i=0; i < tailleTableau; i++){
        somme += tableau[i];
    }
    printf("somme du tableau = %d", somme);
}
