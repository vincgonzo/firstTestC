#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int startAgain = 0, level = 0, value = 0;

int main(){
    do{
        gameLevel();
        levelValue(level);
        printf("Vous avez choisi niveau %d.\n\n", level);
        printf("-----------------------------------\n");
        game(value);
    }while(startAgain);

    return 0;
}

int levelValue(level)
{
    switch(level)
    {
        case 1:
            value = 100;
            break;
        case 2:
            value = 1000;
            break;
        case 3:
            value = 10000;
            break;
    }
    return value;
}

int gameLevel()
{
    printf("Bienvenue, veuillez choisir votre niveau de difficultes sur le jeu.\n");
    printf("1 = nombre entre 1 et 100;\n");
    printf("2 = nombre entre 1 et 1000;\n");
    printf("3 = nombre entre 1 et 10000;\n");
    scanf("%d", &level);

    return level;
}

int game(int level)
{

    const int MAX = level, MIN = 1;
    int nbrEnter = 0, coups = 0;
    srand(time(NULL));
    int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    //printf("le nombre mystere est : %d\net le level max du jeu %d", nombreMystere, level);
    printf("\n============================================");
    printf("\n============================================\n\n");
    printf("Bienvenue dans le jeu du nombre mystere.");
    printf("\n============================================\n\n");

    do
    {
        printf("Tapez un nombre pour trouver le Mysterieux nombre.\n");
        scanf("%d", &nbrEnter);
        coups++;
        if(nbrEnter > nombreMystere){
                printf("C'est moins \n");
        }else if(nbrEnter < nombreMystere){
                    printf("C'est plus. \n");
        }else if(nbrEnter == nombreMystere){
            printf("WHouhouuuu, GAGNNNNNNNNERRRRR !!!!\n\n");
            printf("tu as reussi en %d coups\n", coups);
            printf("Veut tu refaire une partie ?\n 0 = Non\n 1 = Oui\n"),
            scanf("%d", &startAgain);
        }
    }while(nbrEnter != nombreMystere);

    return startAgain;
}

