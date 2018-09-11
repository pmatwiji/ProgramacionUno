#include <stdio.h>
#include <stdlib.h>

void cargarYMostrar(int arrayNuevo[], int cantidad, int inicializador);
void inicializarArray (int arrayNuevo[], int cantidad, int inicializador);
void mostrarArray (int arrayNuevo[], int cantidad);

int main()
{
    int cantidad=5;
    int arrayNuevo [cantidad];
    int inicializador=-1;

    cargarYMostrar(arrayNuevo, cantidad, inicializador);
    return 0;
}

void inicializarArray (int arrayNuevo[], int cantidad, int inicializador)
{
    for(; cantidad>inicializador; cantidad--)
    {
        arrayNuevo[cantidad]=inicializador++;

    }
}

void mostrarArray (int arrayNuevo[], int cantidad)
{
    for(; cantidad>0; cantidad--)
    {
        printf("%d\n",arrayNuevo[cantidad]);
    }

}

void cargarYMostrar(int arrayNuevo[], int cantidad, int inicializador)
{
    inicializarArray(arrayNuevo, cantidad, inicializador);
    mostrarArray(arrayNuevo, cantidad);
}
