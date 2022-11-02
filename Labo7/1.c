#include <stdio.h>

int main(){

FILE *positivos = fopen("positivos.txt","w");//abre archivo para positivos//
FILE *negativos = fopen("negativos.txt","w");//abre archivo para negativos//

int numeros=1;//variable de numero//

do
{
 printf("ingrese su numero :");//pide el numero en consola//
 scanf("%d", &numeros);//guarda//

 if(numeros<0)//condicional//
 {
   fprintf(negativos,"%d ",numeros);//escribe el resultado en el archivo//
 }
 else if(numeros>0)//condicional//
 {
   fprintf(positivos,"%d ",numeros);//escribe el resultado en el archivo//
 }
 
 

} while(numeros != 0);//condicon de stop//


fclose(positivos);//cierro archivo//
fclose(negativos);//cierro archivo//
return 0;

}