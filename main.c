#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"
#define TAILLE_MAX 10 // define max value


int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int read = 0, caractereActuel = 0;
    char string[TAILLE_MAX] = "";

    fichier = fopen("test.txt", "r+");


    if (fichier != NULL)
    {
        // On peut lire et écrire dans le fichier
        printf("Voulez vous lire le contenu du fichier ?\n1 -- Oui\n0 -- Non\n");
        scanf("%d", &read);
        if(read){
            // loop to read every char of a file
            /*do
            {
                caractereActuel = fgetc(fichier); // On lit le caractère
                printf("%c", caractereActuel); // On l'affiche
            } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
            */
            //  string read with limited size
            fgets(string, TAILLE_MAX, fichier);
            printf("%s", string);

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

