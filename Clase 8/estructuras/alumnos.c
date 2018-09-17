#include <stdio.h>
#include <string.h>
#include "alumnos.h"
#define A 3


sAlumno cargarAlumno()
{
    sAlumno miAlumno;
    printf("Ingrese el legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("Ingrese la altura: ");
    scanf("%f", &miAlumno.altura);
    printf("Ingrese la nota: ");
    scanf("%d", &miAlumno.nota);

    return miAlumno;
}

void mostrarAlumno (sAlumno unAlumno)
{
    printf("\n%d--%s--%.2f--%d\n", unAlumno.legajo, unAlumno.nombre, unAlumno.altura, unAlumno.nota);
}

void cargarListado(sAlumno listado[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        listado[i] = cargarAlumno(A);
    }
}
void mostrarListado(sAlumno listado[], int tam)
{
    int i;
    for (i=0;i<tam; i++)
    {
        mostrarAlumno(listado[i]);
    }
}

void ordenarPorNombre (sAlumno listado[], int tam)
{
    int i;
    int j;
    sAlumno auxAlumno;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam ;j++)
        {
            if(strcmp(listado[i].nombre, listado[i].nombre[j])>0)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;
            }
        }
    }
}


