#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    char text[100];


    printf("Comment t'appeles tu ? :");
    scanf("%s", text);
    printf("Bienvenue %s, on va tester des trucs ensemble :)", text);

    return 0;
}


