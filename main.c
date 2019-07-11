#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int read = 0, caractereActuel = 0;

    fichier = fopen("test.txt", "r+");


    if (fichier != NULL)
    {
        // On peut lire et �crire dans le fichier
        printf("Voulez vous lire le contenu du fichier ?\n1 -- Oui\n0 -- Non\n");
        scanf("%d", &read);
        if(read){
            // Boucle de lecture des caract�res un � un
            do
            {
                caractereActuel = fgetc(fichier); // On lit le caract�re
                printf("%c", caractereActuel); // On l'affiche
            } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourn� EOF (fin de fichier)

        }
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }

    return 0;
}

