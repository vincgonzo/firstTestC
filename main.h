/*
* main.h
* 
* Prototypes for string.obj
*
*/
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
// Search string into char array
char* strstr(const char* chaine, const char* chaineARechercher);

char lireCaractere();
int rechercheLettre(char lettre, char motSecret[], int lettreTrouvee[]);
int gagne(int lettreTrouvee[]); 
