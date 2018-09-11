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

void pedirNombre (char* );
void pedirApellido (char* );

int main()
{
    char nombre [20];
    char apellido [20];
    char apellidoYNombre [40] = {};

    pedirNombre(nombre);
    pedirApellido(apellido);

    strcpy(apellidoYNombre, "Apellido y nombre: ");
    strcat(apellidoYNombre, apellido);
    strcat(apellidoYNombre, ", ");
    strcat(apellidoYNombre, nombre);
    puts(apellidoYNombre);

    //printf("Apellido y nombre: %s, %s\n", apellido, nombre);


    return 0;
}

void pedirNombre(char* nombre)
{
    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);
    nombre[0]=toupper(nombre[0]);
}

void pedirApellido(char* apellido)
{
    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(apellido);
    apellido[0]=toupper(apellido[0]);
}

