#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const char *tmp = "Lunes es el primer dia de la semana"; // mi palabra//

int main(int argc, char *argv[]){// mi main//
    char *str = malloc(strlen(tmp));

    printf("%s\n", strncpy(str, tmp, 4));
    printf("%s\n", strncpy(str, tmp + 11, 11));// el que detecta e imprime la palabra//

    free(str);

    return 0;;
}
//tony de jesus hernandez rivas 00214522//