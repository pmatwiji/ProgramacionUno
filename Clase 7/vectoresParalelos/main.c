#include <stdio.h>
#include <stdlib.h>
#define T 2

//funcion para ordenar por nombre
//funcion para motrar alumnos aprobados (>6)
//funcion para mostrar alumnos que se llaman juan
//funcion para mostrar alumnos cuyo nombre empieza con P
//el alumno con mas nota (puede ser mas de uno)
//el mas mediocre legajo=100 nota=5 se llama pepe medir 1.75
//ingresar un legajo y permitir la modificacion de la nota
//transformar cargaAlumnos en carga aleatoria

void cargarAlumnos(int[], char[][21], int [], float[], int);
void mostrarAlumnos(int[], char[][21], int [], float[], int);

int main()
{
    //vectores paralelos

    int legajos [T];
    char nombres [T] [21];
    int notas [T];
    float alturas[T];
    int i;

    cargarAlumnos(legajos, nombres, notas, alturas, T);
    mostrarAlumnos(legajos, nombres, notas, alturas, T);

    printf("%4s %21s %3s %5s\n","Legajo", "Nombre", "Nota", "Altura");
    return 0;
}


void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int);
{
    int i;
    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese nota: ");
        scanf("%d", &notas[i]);
        printf("Ingrese alturas: ");
        scanf("%f", &alturas[i]);

    }
}

void mostrarAlumnos(int[], char[][21], int [], float[], int);
{
    for(i=0; i<T; i++)
    {
        printf("%4d  %21s  %3d  %5.2f\n", legajos[i], nombres[i], notas[i], alturas[i]);
    }
}
