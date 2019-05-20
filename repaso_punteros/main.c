#include <stdio.h>
#include <stdlib.h>

int cargarVector(int*, int,char[]);
int mostrarVector(int*, int);
int buscarMaximo(int*, int, int*);
int mostrarMaximo (int*, int,int*);

int main()
{
    int vector[5];
    int* pVector;
    int opcion;
    int validacion;
    int maximo;

    pVector = vector;
    do
    {
        printf("Menu:\n"
               "1. Cargar vector\n"
               "2. Mostrar vector\n"
               "3. Maximo\n"
               "4. Salir\n"
               "Ingrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            validacion = cargarVector(pVector, 5, "Ingrese un valor: ");
            if(validacion == 0)
                printf("Datos cargados con exito\n");
            else
                printf("Error.");
            system("pause");
            system("cls");
            break;
        case 2:
            validacion = mostrarVector(pVector,5);
            if(validacion == 0)
                printf("Datos cargados con exito\n");
            else
                printf("Error.");
            system("pause");
            system("cls");
            break;
        case 3:
            validacion = mostrarMaximo(pVector, 5, &maximo);
            if(validacion == 0)
                printf("Datos cargados con exito\n");
            else
                printf("Error.");
            system("pause");
            system("cls");
            break;
        }

    }
    while(opcion!=4);



    return 0;
}

int cargarVector(int* pVector, int largo, char mensaje[])
{
    int retorno = 1;
    int i;

    if(pVector!=NULL)
    {
        for(i=0; i<largo; i++)
        {
            printf(mensaje);
            scanf("%d", pVector+i);
        }
        retorno = 0;
    }
    else
    {
        printf("Error. No se pueden cargar los datos");
    }
    return retorno;
}

int mostrarVector(int* pVector, int largo)
{
    int retorno = 1;
    int i;

    if(pVector!=NULL)
    {
        for (i=0; i<5; i++)
        {
            printf("%d. %d\n",i+1, *(pVector+i));
        }
        retorno = 0;
    }
    else
    {
        printf("Error. No se pueden cargar los datos\n");
    }
    return retorno;
}


int buscarMaximo(int* pVector, int largo, int* maximo)
{
    int retorno = 1;
    int i;
    int auxMaximo = 0;

    if(pVector != NULL)
    {
        for(i=0; i<largo; i++)
        {
            if(*(pVector+i) > auxMaximo)
            {
                auxMaximo = *(pVector+i);
                *maximo = auxMaximo;
            }

        }
        retorno = 0;
    }
    else
    {
        printf("Error. No se pudo buscar el maximo.\n");
    }

    return retorno;
}

int mostrarMaximo (int* pVector, int largo,int* maximo)
{
    int retorno = 1;
    int validacion = buscarMaximo(pVector, largo, maximo);
    if(validacion!= 1 && pVector != NULL)
    {
        printf("El maximo es: %d\n", *maximo);
        retorno = 0;

    }
    else
    {
        printf("Error. No se pudo mostrar el maximo");
    }
    return retorno;
}


