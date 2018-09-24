
#include <stdio.h>
#include "funciones.h"
#include <string.h>
#include <ctype.h>
#define A 3


sAlumno cargarAlumno()
{
    system("cls");
    sAlumno miAlumno;
    int i;
    char buffer[1024];
    printf("Ingrese el legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>20)
    {
        printf("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(miAlumno.nombre, buffer);
    miAlumno.nombre[0]=toupper(miAlumno.nombre[0]);

    for (i=0; i<strlen(miAlumno.nombre); i++)
    {
        if(miAlumno.nombre[i]== ' ')
        {
            miAlumno.nombre[i+1]=toupper(miAlumno.nombre[i+1]);
        }
    }
    printf("Ingrese la altura: ");
    scanf("%f", &miAlumno.altura);
    printf("Ingrese la nota: ");
    scanf("%d", &miAlumno.nota);
    system("cls");

    return miAlumno;

}

void mostrarAlumno (sAlumno unAlumno)
{
    printf("%5d %21s %5.2f %5d\n", unAlumno.legajo, unAlumno.nombre, unAlumno.altura, unAlumno.nota);
}

void cargarListado(sAlumno listado[], int tam)
{

    int i;
    for(i=0; i<tam; i++)
    {
        listado[i] = cargarAlumno(A);
    }

}
void mostrarListado(sAlumno listado[], int tam)
{

    int i;
    printf("%5s %21s %5s %5s\n","Legajo","Nombre","Altura","Nota");
    for (i=0; i<tam; i++)
    {
        mostrarAlumno(listado[i]);
    }

}

void ordenarPorNombre(sAlumno listado[], int tam)
{

    int i;
    int j;
    sAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre, listado[j].nombre)>0)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;
            }
        }
    }


}

void mostrarAprobados(sAlumno listado[], int tam)
{

    int i;
    printf("%5s %21s %5s %5s \n", "Legajo", "Nombre", "Altura", "Nota");
    for(i=0; i<tam; i++)
    {
        if(listado[i].nota >= 6)
        {
            printf("%5d %21s %5.2f %5d \n", listado[i].legajo, listado[i].nombre, listado[i].altura, listado[i].nota);
        }
    }

}



/*
int cantidadDeJuanes(int contador, char nombres[][21], int tam)
{
    int i;
    contador = 0;
    char juan[5] = {};
    strcpy(juan, "Juan");
    for(i=0; i<tam; i++)
    {
        if(strcmp(nombres[i], juan[5]) == 0)
        {
            contador++;
        }

    }
    printf("La cantidad de Juanes son: %d\n ", contador);
    return contador;

}
*/

//void nombreEmpiezaConP(sAlumno listado[], int tam)
//{
//    int i;
//    printf("\nNombres con P: \n\n");
//    for(i=0; i<tam; i++)
//    {
//        if(listado[i].nombre[0] == 'P' || listado[i].nombre[i][0] == 'p')
//        {
//            printf("%s\n",listado[i].nombre[i]);
//        }
//    }
//
//}

/*
    void mejoresNotas (char nombres[][21], int notas[], int tam)
{
    int i;
    int maximo;
    char alumnosNotaMaxima [i][21];
    strcpy(maximo, notas[0]);
    for(i=0 ; i<tam; i++)
    {
        if(notas[i]>= maximo)
        {
            strcpy(notas[i], maximo);
            strcpy(alumnosNotaMaxima[i][21], nombres[i][21]);

        }

    }

    printf("\nLa nota maxima fue: %d\n", maximo);
    printf("\nLos alumnos con la nota maxima fueron: \n");
    puts(alumnosNotaMaxima[i][21]);
}

*/

/*
void elMasMediocre(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if (legajos[i] == 100 && nombres[i][21] == "pepe" && notas[i] == 5 && alturas[i] == 1.75)
        {
            printf("\nTenemos al alumno mas mediocre en la clase\n");
        }

    }
}
*/

/*
void modificarNota (int legajos[], int notas[], int tam)
{
    int i;

}
*/

/*void ordenarPorNombre (int legajos[], char nombres[][21], int notas[], float altura[], int tam)
{
    int auxInt;
    float auxFloat;
    char auxString[100];

    int i;
    int j;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(nombres[i],nombres[j])>0)
            {
                strcpy(auxString, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j],auxString);

                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                auxInt = notas[i];
                notas[i] = notas[j];
                notas[j] = auxInt;

                auxFloat = altura[i];
                altura[i] = altura[j];
                altura[j] = auxFloat;

            }
        }
    }
}
*/
