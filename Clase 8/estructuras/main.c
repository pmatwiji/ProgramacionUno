#include <stdio.h>
#include <stdlib.h>
#include "alumnos.h"
#define A 3

int main()
{
//    sAlumno miAlumno;  //paara un solo alumno
    //sAlumno otroAlumno;  **
    //otroAlumno = miAlumno; //para cargar dos sin for

    //menu de usuario
    sAlumno listadoMain[A];
    cargarListado(listadoMain, A);
    mostrarListado(listadoMain, A);
    ordenarPorNombre (listadoMain, A);


//cargarAlumno(); **
//mostrarAlumno(miAlumno);  //para un solo alumno

    return 0;
}

//busqueda max

/*
 primero buscas el maximo y lo definis
 buscar nombres que tengan ese maximo y lo imprimo



*/


//modificacion

/*
pedir legajo
scanf legajo
busco dentro de campo legajo en struct struct.legajo
si existe, cambio la nota
pido nueva nota scanf
validar nota

no existe, error











*/
