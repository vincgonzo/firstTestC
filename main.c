#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"
#include "coord.h"


int main(){
    char text[100], string[] = "Bouzouff";
    int StringLength = 0;
    char chaine[] = "Texte de test", *suiteChaine = NULL;

    Coordonnees point;

    printf("Comment t'appeles tu ? : ");
    scanf("%s", text);
    StringLength = strlen(text);
    printf("Bienvenue %s, on va tester des trucs ensemble :)\nCette chaine de caractère fait %d de longueur.", text, StringLength);

    strcat(text, string);
    printf("\n\nPour la deconnade je dis %s\n", text);


    suiteChaine = strchr(chaine, 'd');
    if (suiteChaine != NULL) // Si on a trouvé quelque chose
    {
        printf("Voici la fin de la chaine a partir du premier d : %s", suiteChaine);
    }

    return 0;
}


