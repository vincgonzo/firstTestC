#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);

int main()
{
    int tableau[4] = {10, 20, 15};

    sommeTableau(tableau, 4);
    moyenneTableau(tableau, 4);

    return 0;
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0, i = 0;
    for(i=0; i < tailleTableau; i++){
        somme += tableau[i];
    }
    printf("somme du tableau = %d.\n", somme);
}

double moyenneTableau(int array[], int tailleTableau)
{
    float avg;
    int sum = 0, loop = 0;

    for(loop = 0; loop < tailleTableau; loop++) {
            printf("\nsum == %d", sum);
          sum = sum + array[loop];
    }

    avg = (float)sum / tailleTableau;
    printf("\nAverage of array values is %.2f", avg);

   return 0;
}
