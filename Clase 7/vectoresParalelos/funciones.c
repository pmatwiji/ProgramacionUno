
#include <stdio.h>
#include "funciones.h"
#include <string.h>
#include <ctype.h>

void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int i;
    int j;
    char buffer[1024];

    for(i=0; i<tam; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(buffer);
        while(strlen(buffer)>20)
        {
            printf("Reingrese su nombre: ");
            fflush(stdin);
            gets(buffer);
        }
        strcpy(nombres[i], buffer);
        nombres[i][0]=toupper(nombres[i][0]);

        for (j=0; j<strlen(nombres[i]); j++)
        {
            if(nombres[i][j]== ' ')
            {
                nombres[i][j+1]=toupper(nombres[i][j+1]);
            }
        }
        printf("Ingrese nota: ");
        scanf("%d", &notas[i]);
        printf("Ingrese altura: ");
        scanf("%f", &alturas[i]);

    }
}

void mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int i;
    printf("%5s %21s %5s %5s\n","Legajo","Nombre","Nota","Altura");
    for(i=0; i<tam; i++)
    {
        printf("%5d %21s %5d %5.2f\n", legajos[i], nombres[i], notas[i], alturas[i] );

    }
}

void ordenarAlfabeticamente (char nombres[][21], int tam)
{
    int i;
    int j;
    char aux[21];
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(nombres[i], nombres[j]) == 1)
            {
                strcpy(aux,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],aux);
            }
        }
    }

    printf("\nNombres ordenados alfabeticamente: \n\n");
    for(i=0; i<tam; i++)
    {
        printf("%s\n", nombres[i]);
    }
}

int contadorAprobados(int contador, int notas[],int tam)
{
    int i = 0;
    contador = 0;
    for( ; i<tam; i++)
    {
        if(notas[i]>=6)
        {
            contador++;
        }

    }
    printf("\nLa cantidad de alumnos aprobados son: %d\n\n", contador);
    return contador;
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

void nombreEmpiezaConP(char nombres[][21], int tam)
{
    int i;
    printf("\nNombres con P: \n\n");
    for(i=0; i<tam; i++)
    {
        if(nombres[i][0] == 'P' || nombres[i][0] == 'p')
        {
            printf("%s\n",nombres[i]);
            //comienzaConP++;
        }
    }

}

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
