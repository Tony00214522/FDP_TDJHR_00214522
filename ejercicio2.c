#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitarespacios(char * palabra, char * resutado); // mi variable ara quitar espacios//

int espalindromo(char * palabra); //mi variable de palindromo//

int main(void){ // funcion main//
    
    char word[100];// variable de la palabra//
    char wordsinespacios[100]; // variable de la palabra sin espacios//

    printf("ingrese una palabra :"); // ingreso y guardo la palabra//
    gets(word);

    quitarespacios(word, wordsinespacios);// llamo la funcion para quitar espacios//

    if (espalindromo(wordsinespacios))// mi if final de si me es o no es palindroma//
    {
        printf(" \nla palabra ingresada es palindromo.");
    }
    else
    {
        printf(" \nla palara ingresada no es palindromo");
    }
    
    


}

void quitarespacios(char * palabra, char * resutado){ //mi funcion para quitar espacios con punteros//

    char palabrasinespacios[100] = " ";

    int i =0;

    while (*palabra != '\0')
    {
        if (*palabra !=' ')
        {
            palabrasinespacios[i] = *palabra;
            i++;
        }
        palabra++;
}

strcpy(resutado, palabrasinespacios);

}

int espalindromo(char * palabra){// mi funcion que hace el proceso de reconocimiento de las palabras//

    int a =0;
    int b = strlen(palabra) - 1;

    char auxA, auxB;// variables para el reconocimiento de letas mayus//

    int i;
    for (i = 0; i < strlen(palabra); i++)// mi for para la deteccion de letras mayusculas y hacerlas minus//
    {
        auxA = palabra[a];
        auxB = palabra[b];

        if (auxA >= 65 && auxA <= 90)
        {
            auxA += 32;
        
        }
         if (auxA >= 65 && auxA <= 90)
        {
            auxB += 32;
        
        }
        if (auxA == auxB)
        {
            a++;
            b--;
        }
        else{
            return 0;
        }
        
    }
    
    return 1;

}
//tony de jesus hernandez rivas 00214522//
