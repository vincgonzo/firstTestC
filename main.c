#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"
#include "coord.h"


int main(){

    int* memoireAllouee = NULL;

    memoireAllouee = malloc(sizeof(int)); // Allocation de la m�moire
    if (memoireAllouee == NULL)
    {
        exit(0);
    }

    // Utilisation de la m�moire
    printf("Quel age avez-vous ? ");
    scanf("%d", memoireAllouee);
    printf("Vous avez %d ans\n", *memoireAllouee);

    free(memoireAllouee); // Lib�ration de m�moire
    return 0;
}

