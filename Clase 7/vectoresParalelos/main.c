#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define T 2

//ordenar nombre X
//muestre los alumnos aprobados (nota>6) X
//muestre los alumnos que se llaman Juan
//muestre los alumnos cuyo nombre comienzan con P X
//El alumno con mas nota (sabiendo que puede ser mas que uno)
//"EL mas mediocre legajo=100 nota=5 se llame pepe medir 1.75"
//Ingresar un legajo y permitir la modificacion de la nota

//(transformar la carga de datos en una carga aleatoria)




int main()
{
    int legajos[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    int contadorAux = 0;


    cargarAlumnos(legajos, nombres, notas, alturas, T);
    ordenarPorNombre (legajos,nombres,notas,alturas, T);
    mostrarAlumnos(legajos, nombres, notas, alturas, T);
    ordenarAlfabeticamente(nombres, T);
    contadorAux = contadorAprobados(contadorAux, notas, T);
    //cantidadDeJuanes(contadorAux, nombres, T);
    nombreEmpiezaConP(nombres, T);
    //mejoresNotas (nombres, notas, T);
    //elMasMediocre(legajos, nombres, notas, alturas, T);




}

