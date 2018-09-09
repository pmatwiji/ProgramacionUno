#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//devuelve varias

void main(void)
{
   /* char texto[20];
    printf("\nIngrese nombre: ");
    gets(texto);
    printf("\nNombre: %s ",texto);


    //compara palabras tipo password
    //correcto == 0

    char texto2[20];
    printf("\nIngrese el password: ");
    gets(texto2);
    if(strcmp(texto2,"1234")==0)
    {
        printf("Password correcto");
    }

    else
    {
        printf("Password incorrecto");
    }*/


    char texto3[20];
    char texto4[20];
    printf("\nIngrese una palabra: ");
    gets(texto3);
    strcpy(texto3,texto4);
    printf("Se ingreso:%s la copia es:%s",texto3,texto4);




}


//devuelve una sola palabra


/*
void main(void)
{
    char texto[20];
    printf("\nIngrese nombre: ");
    scanf("%s", texto);
    printf("\nNombre: %s ",texto);
}
*/


