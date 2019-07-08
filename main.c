#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()

{
    int NM = 0, NU = 0;
    int MAX = 10, MIN = 1; // declaration des variables + affectation
    int comptecoup, partie = 1, diff = 0;


    do
    {
       printf ("veuillez choisir votre niveau de difficulte\n"
               "1- facile\n"
               "2- moyen\n"
               "3- hardcore\n" );
       scanf("%d", &diff); // choix du niveau de difficulte (saisie utilisateur)

       do
       {
            switch(diff)
            {
                case 0:
                    printf("allons un peu de courage ce n'est tout de meme pas si dur\n");
                    printf ("veuillez choisir votre niveau de difficulte\n"
                            "1- facile\n"
                            "2- moyen\n"
                            "3- hardcore\n" );
                    scanf("%d", &diff); // choix du niveau de difficulte (saisie utilisateur)
                break;
                case 1:
                    MAX = 100;
                break;
                case 2:
                    MAX = 1000;
                break;
                case 3:
                    MAX = 10000; // choix du niveau de difficulte (structure conditionnelle)
                default:
                    printf("hum un vrai hardcore gamer a ce que je vois...\nmalheuresement un tel niveau de difficulte n'est pas prevu\n\n");
                    printf ("veuillez choisir votre niveau de difficulte\n"
                            "1- facile\n"
                            "2- moyen\n"
                            "3- hardcore\n" );
                    scanf("%d", &diff); //retour au choix de la difficulte
                break;
            }
       }
        while(diff < 1 || diff > 3);

                comptecoup = 1;
                srand(time(NULL));
                NM = (rand() % (MAX - MIN + 1)) + MIN;  // l'ordi tire un nombre au hasard entre MAX et Min


            do // coeur du jeu (saisie du nombre et tests)
            {
                printf("quel est le nombre mystere?\n");
                scanf("%d", &NU);

                if(NU>NM)
                {
                    printf ("c'est moins!\n");
                    comptecoup++;
                }
                else if(NU<NM)
                {
                    printf("c'est plus!\n");
                    comptecoup++;
                }
                else
                {
                    printf ("bravo! tu as trouve en %d coups\ntu veux refaire une partie ? 1 = oui, 0 = non\n", comptecoup); // Victwaaaare
                    scanf("%d", &partie); // saisie pour une nouvelle partie
                }
        }

        while(NU != NM);

    }
    while(partie);

    return 0;
}
