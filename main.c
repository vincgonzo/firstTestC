#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"

void viderBuffer();
long lireLong();
double lireDouble();
int lire(char *chaine, int longueur);

#define DEST_SIZE 40

int main(){
    char src[] = "Look Here";
	char dest[DEST_SIZE] = "Unimaginable";
    char src2[] = "Look @Me";
	char dest2[DEST_SIZE] = "whats froke";

	char *p = dest + 5;

	strcpy(p, src);
	printf("\n %s",  dest);


	strncpy(dest2, src2, 5);
    printf("\n %s", dest2);

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
