#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
//    do
//    {
//        printf("a. Alta\no. Ordenar\nm. Mostrar");
//        printf("Ingrese una opcion: ");
//        opcion= getche();
//        switch(opcion)
//        {
//        case 'a':
//            //cargar listado
//            break;
//        case 'o':
//            //ordenar
//            break;
//        case 'm':
//            //mostrar
//            break;
//        case 'M':
//            //modificar
//              break;
//        }
//        while (opcion != 's');
//    }


    /** \brief busca espacio disponible
     *
     * \param int[] listado de enteros
     * \param int tamaño del listado
     * \param int valor ilogico
     * \return int [-1] si no hay espacio, [>=0] un indice donde guardar
     *
     */
    int buscarLibre(int[], int, int);
    int i;
    char seguir;
    int vector[5];
    int indice;

    for (i=0; i<5; i++)
    {
        vector[i]= -1;
        //printf("%d", vector[i]);
    }
    //do while pidiendo enteros
    do
    {
        indice =buscarLibre(vector, 5, -1);
        if(indice != -1)
        {
            printf("\nIngrese un numero: ");
            scanf("%d", &vector[indice]);
        }
        else
        {
            printf("No hay mas espacio");
            break;
        }
        printf("Desea continuar? ");
        seguir = getche();
    }
    while(seguir == 's');
    return 0;
}

int buscarLibre(int numeros[], int tam, int ilogico)
{
    int i;
    int index= -1;
    for(i=0; i<tam; i++)
    {
        if(numeros[i]==ilogico)
        {
            index= i;
            break;
        }
    }
    return index;
}


