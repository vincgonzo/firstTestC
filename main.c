#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "main.h"
#include "coord.h"
#include "dico.h"

#ifdef _cplusplus
#error Compile en C ...
#endif // _cplusplus

int main(){
    int tries = 10, i = 0, wordSize = 0;
    char theSecretWord[100] = {0}, maLettre = 0;
    int *lettreTrouvee = NULL;

    if(!piocherMot(theSecretWord))
    {
        exit(0);
    }
    wordSize = strlen(theSecretWord);
    lettreTrouvee = malloc(wordSize * sizeof(int));

    if(lettreTrouvee == NULL)
    {
        exit(0);
    }

    printf("Bienvenue dans le Pendu !\n\n");

    while(tries > 0 && !gagne(lettreTrouvee, wordSize))
    {
        printf("Il vous reste %d coups a jouer\n", tries);
        printf("Quel est le mot secret ? ");

        for (i = 0 ; i < wordSize ; i++)
        {
            if (lettreTrouvee[i]) // Si on a trouvé la lettre n° i
                printf("%c", theSecretWord[i]); // On l'affiche
            else
                printf("*"); // Sinon, on affiche une étoile pour les lettres non trouvées
        }

        printf("\nProposez une lettre : ");
        maLettre = lireCaractere();
        rechercheLettre(maLettre, theSecretWord, lettreTrouvee);

        if(!rechercheLettre(maLettre, theSecretWord, lettreTrouvee))
            tries--;
    }


    if( gagne(lettreTrouvee, wordSize) )
        printf("\n !!!! Fucking Winner here !!! Congrats word was :: %s", theSecretWord);
    else
        printf("\n Loser get the fuck out of here !!!!!!!!!! ");


    return 0;
}

char lireCaractere()
{
    char caractere = 0;

    caractere = getchar(); // On lit le premier caractère
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà

    // On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer)
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caractère qu'on a lu
}

int gagne(int lettreTrouvee[], int sizeLoop)
{
    int i = 0;
    int joueurGagne = 1;

    for (i = 0 ; i < sizeLoop ; i++)
    {
        if (lettreTrouvee[i] == 0)
            joueurGagne = 0;
    }

    return joueurGagne;
}

int rechercheLettre(char lettre, char motSecret[], int lettreTrouvee[])
{
    int i = 0;
    int bonneLettre = 0;

    // On parcourt motSecret pour vérifier si la lettre proposée y est
    for (i = 0 ; motSecret[i] != '\0' ; i++)
    {
        if (lettre == motSecret[i]) // Si la lettre y est
        {
            bonneLettre = 1; // On mémorise que c'était une bonne lettre
            lettreTrouvee[i] = 1; // On met à 1 la case du tableau de booléens correspondant à la lettre actuelle
        }
    }

    return bonneLettre;
}
