#include <stdio.h>
#include <stdlib.h>

int cargarVector(int*, int,char[]);
int mostrarVector(int*, int);

int main()
{
    int vector[5];
    int* pVector;
    int opcion;
    int validacion;

    pVector = vector;
    do
    {
        printf("Menu:\n"
               "1. Cargar vector\n"
               "2. Mostrar vector\n"
               "3. Salir\n"
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
            mostrarVector(pVector,5);
            system("pause");
            system("cls");
            break;
        }

    }
    while(opcion!=3);



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
        printf("Error. No se pueden cargar los datos");
    }
    return retorno;


}
