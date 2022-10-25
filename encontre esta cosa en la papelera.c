#include <stdio.h>

int main(){
    int numero = 0;
    printf("Ingrese un numero entero\n");
    scanf("%d",&numero);

    if (numero>0)
    printf("El numero %d es positivo\n",numero);
    else
    printf("El numero %d es negativo\n",numero);
    
    return 0;
}