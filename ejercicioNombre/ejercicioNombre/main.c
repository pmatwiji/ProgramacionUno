#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
//cadenas
nombre 20
apellido 20
apellido y nombre 40

nombre: juan carlos
apellido gomez
apellido y nombre gomez, juan carlos

*/

//void pedirNombre (char* );
//void pedirApellido (char* );

int main()
{
    char nombre [20];
    char apellido [20];
    char apellidoYNombre [41] = "Apellido y nombre: ";
    char buffer [1024];
    int i;

//    pedirNombre(nombre);
//    pedirApellido(apellido);

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        printf("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(nombre, buffer);

    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        printf("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(apellido, buffer);

    //strcpy(apellidoYNombre, "Apellido y nombre: ");
    strcat(apellidoYNombre, apellido);
    strcat(apellidoYNombre, ", ");
    strcat(apellidoYNombre, nombre);
    strlwr(apellidoYNombre);
    apellidoYNombre[0]=toupper(apellidoYNombre[0]);

    for (i=0; i<strlen(apellidoYNombre); i++)
    {
        if(apellidoYNombre[i]== ' ') // if(isspace(apellidoYNombre[i])
        {
            apellidoYNombre[i+1]=toupper(apellidoYNombre[i+1]);
        }
    }

    puts(apellidoYNombre);

    //printf("Apellido y nombre: %s, %s\n", apellido, nombre);


    return 0;
}
/*

void pedirNombre(char* nombre)
{
    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        printf("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(nombre, buffer);
    nombre[0]=toupper(nombre[0]);
}

void pedirApellido(char* apellido)
{
    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        printf("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(apellido, buffer);
    apellido[0]=toupper(apellido[0]);
}

*/
