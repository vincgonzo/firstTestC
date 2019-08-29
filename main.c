#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"

void viderBuffer();
long lireLong();
double lireDouble();
int lire(char *chaine, int longueur);

#define NUMBER_OF_STRING 4
#define MAX_STRING_SIZE 40

void print_array(const char arr[NUMBER_OF_STRING][MAX_STRING_SIZE])
{
	for (int i = 0; i < NUMBER_OF_STRING; i++)
	{
		printf("'%s' has length %d\n", arr[i], strlen(arr[i]));
	}
}
int main(){
    char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] =
	{ "array of c string",
	  "is fun to use",
	  "make sure to properly",
	  "tell the array size"
	};

	printf("Before reverse:\n");
	print_array(arr);

	for (int i = 0; i < NUMBER_OF_STRING; i++)
	{
		for (int j = 0, k = strlen(arr[i]) - 1; j < k; j++, k--)
		{
			char temp = arr[i][j];
			arr[i][j] = arr[i][k];
			arr[i][k] = temp;
		}
	}

	printf("\nAfter reverse:\n");
	print_array(arr);

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
