#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define A 2

//muestre los alumnos que se llaman Juan
//muestre los alumnos cuyo nombre comienzan con P X
//El alumno con mas nota (sabiendo que puede ser mas que uno)
//"EL mas mediocre legajo=100 nota=5 se llame pepe medir 1.75"
//Ingresar un legajo y permitir la modificacion de la nota

//(transformar la carga de datos en una carga aleatoria)




int main()
{

    char opcion;
    sAlumno listadoMain[A];
    do
    {
        printf("a. Cargar alumnos\nb. Ordenar alumnos\nc. Mostrar alumnos\nd. Mostrar alumnos aprobados\n");
        printf("Ingrese una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);
        switch(opcion)
        {
        case 'a':
            cargarListado(listadoMain, A);
            break;
        case 'b':
            ordenarPorNombre (listadoMain, A);
            break;
        case 'c':
            mostrarListado(listadoMain, A);
            break;
        case 'd':
            mostrarAprobados(listadoMain, A);
            break;
        }

//    contadorAprobados(listadoMain, A);
//    cantidadDeJuanes(contadorAux, nombres, T);
//    nombreEmpiezaConP(listadoMain, A);
        //mejoresNotas (nombres, notas, T);
        //elMasMediocre(legajos, nombres, notas, alturas, T);
    } while (opcion != 'x');
}

