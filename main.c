#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"
#include "coord.h"


int main(){
    printf("char : %d octets\n", sizeof(char));
    printf("int : %d octets\n", sizeof(int));
    printf("long : %d octets\n", sizeof(long));
    printf("double : %d octets\n", sizeof(double));

    return 0;
}

