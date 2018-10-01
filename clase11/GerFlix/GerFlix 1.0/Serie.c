#include <stdio.h>
#include <stdlib.h>
#include "Serie.h"
#include <string.h>


/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}


void mostrarSerie(eSerie unaSerie)
{
    printf("%5d %20s %20s %5d\n", unaSerie.idSerie, unaSerie.nombre, unaSerie.genero, unaSerie.cantidadTemporadas);
}

void mostrarListaSeries(eSerie series[], int cant)
{
    int i;
    printf("%5s %20s %20s %5s\n","ID","Nombre","Genero", "Temporadas");
    for (i=0; i<cant; i++)
    {
        mostrarSerie(series[i]);
    }
}

int retornarIdDeSerie(eSerie listado[], int cantidad, eSerie unaSerie)
{
    int i;
    for (i=0; i<cantidad; i++)
    {
        if(listado[i].idSerie==unUsuario.idSerie
           {
               return i;
           }
    }
    return -1;
}

int retornarIdDeSerieInt(eSerie listado[], int cantidad, eSerie unaSerie)
{
    int i;
    for (i=0; i<cantidad; i++)
    {
        if(listado[i].idSerie==unaSerie.idSerie)
           {
               return i;
           }
    }
    return -1;
}
