#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// give length of array
size_t strlen(const char* chaine);
// Function to copy char array into other pointer of array
char* strcpy(char* copieDeLaChaine, const char* chaineACopier);
// Concatenate two strings
char* strcat(char* chaine1, const char* chaine2);
// string comparaison
int strcmp(const char* chaine1, const char* chaine2);
// Search a char into char array
// give a int to localize char into target array or NULL if doesn't find any
char* strchr(const char* chaine, int caractereARechercher);

int main(){
    char text[100], string[] = "Bouzouff";
    int StringLength = 0;
    char chaine[] = "Texte de test", *suiteChaine = NULL;



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


