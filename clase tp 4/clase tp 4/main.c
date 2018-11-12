#include <stdio.h>
#include <stdlib.h>

void mostrar(int);
void otroMostrar(int);

void manejador (void(*puntFuncion)(int), int);

int main()
{
//    void (*pFuncion)(int);
//    pFuncion = mostrar;
//    pFuncion(2);
//
//    pFuncion = otroMostrar;
//    pFuncion(15);

    manejador(mostrar, 70);

    return 0;
}

void mostrar(int x)
{
    printf("Holas Pianolas\n%d\n", x);
}

void otroMostrar(int r)
{
    printf("NNV\n%d\n", r);
}


void manejador (void(*puntFuncion)(int), int valor)
{
    puntFuncion(valor);
}
