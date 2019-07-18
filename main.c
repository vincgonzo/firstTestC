#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"

void viderBuffer();
long lireLong();
double lireDouble();
int lire(char *chaine, int longueur);

int main(){
    char nom[10];
    long age = 0;
    double poids = 0;

    /*printf("Quel est votre nom ? ");
    lire(nom, 10);
    printf("Ah ! Vous vous appelez donc %s !\n\n", nom);

    printf("Quel est votre age ? ");
    age = lireLong();
    printf("Ah ! Vous avez donc %d ans !\n\n", age);*/

    printf("Quel est votre poids ? ");
    poids = lireDouble();
    printf("Tu peses donc %d kg !\n\n", poids);

    return 0;
}


void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;

    if (fgets(chaine, longueur, stdin) != NULL)
    {
        positionEntree = strchr(chaine, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            viderBuffer();
        }
        return 1;
    }
    else
    {
        viderBuffer();
        return 0;
    }
}

long lireLong()
{
    char nombreTexte[100] = {0}; // 100 cases devraient suffire

    if (lire(nombreTexte, 100))
    {
        // Si lecture du texte ok, convertir le nombre en long et le retourner
        return strtol(nombreTexte, NULL, 10);
    }
    else
    {
        // Si problème de lecture, renvoyer 0
        return 0;
    }
}

double lireDouble()
{
     char nbrTxt[100] = {0}; // 100 cases devraient suffire

    if (lire(nbrTxt, 100))
    {
        printf('%s', nbrTxt);
        // Si lecture du texte ok, convertir le nombre en long et le retourner
        return strtod(nbrTxt, NULL);
    }
    else
    {
        // Si problème de lecture, renvoyer 0
        return 0;
    }
}
