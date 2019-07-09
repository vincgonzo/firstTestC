#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void ordonnerTableau(int tableau[], int tailleTableau);

int main()
{
    int tableau[4] = {10, 20, 15};
    int arrayTest[4] = {0};

    sommeTableau(tableau, 4);
    moyenneTableau(tableau, 4);
    ordonnerTableau(tableau, 4);
    //copie(tableau, arrayTest, 4);

    return 0;
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0, i = 0;
    for(i=0; i < tailleTableau; i++){
        somme += tableau[i];
    }
    printf("somme du tableau = %d.\n", somme);
    return 0;
}

double moyenneTableau(int array[], int tailleTableau)
{
    float avg;
    int sum = 0, loop = 0;

    for(loop = 0; loop < tailleTableau; loop++) {
          sum = sum + array[loop];
    }

    avg = (float)sum / tailleTableau;
    printf("\nAverage of array values is %.2f\n", avg);

   return 0;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int loop = 0;

    for(loop = 0; loop < tailleTableau; loop++) {
        tableauCopie[loop] = tableauOriginal[loop];
        printf("\nfor entry : %d the array got value :: %d", loop, tableauCopie[loop]);
    }
    return 0;
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int *array;
    int temp, i, j, a;
    array=malloc(tailleTableau * sizeof(*array));
    int *aPtr = array;

    srand(time(NULL));
    for (i = 0; i < tailleTableau; i++){
         aPtr[i] =(rand() % 101);
         printf("%d ", aPtr[i]);
         a++;
         if (a == 4){
        printf("\n");
        a = 0;
        }
    }
        printf("\n\n\nIn ascending order\n");
    for (i = 0; i < tailleTableau; i++){
         for (j = i+1; j < tailleTableau; j++){
            if(aPtr[i] > aPtr[j]){
                temp=aPtr[i];
                aPtr[i]=aPtr[j];
                    aPtr[j]=temp;
            }
        }
        printf("%d\n", aPtr[i]);
    }
    for (j = 0; j<tailleTableau; j++){
    }

}
