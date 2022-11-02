#include <stdio.h>

int main(){

    FILE *Letritas = fopen("Letritas.txt","w");


    char palabritas[12];//arreglito de 12 caracteres//
    int contadorA=0,contadorE=0,contadorI=0,contadorO=0,contadorU=0;//contadores//


    printf("ingrese una frases de maximo 12 letras:");//aqui me pide la frase//
    fgets(palabritas,sizeof(palabritas),stdin);// aqui me guarda la frase con fgets//

    
    for (int i = 0; i < 12; i++)//for para realizar el conteo//
    {
        if (palabritas[i]=='a')//para saber cuantas letra a hay//
        {
            
            contadorA++;

        }
        else if (palabritas[i]=='e')//para saber cuantas letra e hay//
        {
            contadorE++;
        }
        else if (palabritas[i]=='i')//para saber cuantas letra i hay//
        {
            contadorI++;
        }
        else if (palabritas[i]=='o')//para saber cuantas letra o hay//
        {
            contadorO++;
        }
        else if (palabritas[i]=='u')//para saber cuantas letra u hay//
        {
            contadorU++;
        }
        
    }
    
    fprintf(Letritas,"La Cantidad de A %d\n",contadorA);//imprime la cantidad de a//

    fprintf(Letritas,"La Cantidad de E %d\n",contadorE);//imprime la cantidad de e//

    fprintf(Letritas,"La Cantidad de I %d\n",contadorI);//imprime la cantidad de i//

    fprintf(Letritas,"La Cantidad de O %d\n",contadorO);//imprime la cantidad de o//

    fprintf(Letritas,"La Cantidad de U %d",contadorU);//imprime la cantidad de u//



    fclose(Letritas);
    return 0;
}