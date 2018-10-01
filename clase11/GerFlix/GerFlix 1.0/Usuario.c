#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}


void mostrarListaUsuarios(eUsuario usuarios[], int cant)
{
    int i;
    printf("%5s %20s %10s\n","ID","Nombre","ID serie");
    for (i=0; i<cant; i++)
    {
        mostrarUsuario(usuarios[i]);
    }
}


void mostrarUsuario(eUsuario unUsuario)
{
    printf("%5d %20s %5d\n", unUsuario.idUsuario, unUsuario.nombre, unUsuario.idSerie);
}

int retornarId(eUsuario listado[], int cantidad, eUsuario unUsuario)
{
    int i;
    for (i=0; i<cantidad; i++)
    {
        if(listado[i].idUsuario==unUsuario.idUsuario
           {
               return i;
           }
    }
    return -1;
}

void mostrarUsuarioConSuSerie(eUsuario listado[], int cantidad, eSerie listSerie)
{
    int i;
    int indiceSerie;
    for (i=0; i<cantidad; i++)
    {
        mostrarUsuario(listado[i]);
        indiceSerie = retornarIdDeSerieInt(listSerie, cantSerie, listado[i].idSerie)

    }

}


