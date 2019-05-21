#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
//    int* pNumero;
      int* pNumeros;
      int* pAuxNumeros;
    /*-------------INICIALIZA EN BASURA-----------*/
//    pNumero = (int*) malloc(sizeof(int));
//    *pNumero =78;
//
//    if(pNumero!= NULL)
//    {
//        printf("*pNumero: %d\n", *pNumero);
//        printf("Luego del free: \n");
//        free(pNumero);
//        printf("*pNumero: %d\n", *pNumero);
//    }


    /*-------------INICIALIZA EN 0-----------*/
//    pNumero = (int*) calloc(sizeof(int),1);
//
//    if(pNumero!= NULL)
//    {
//        printf("*pNumero: %d\n", *pNumero);
//    }

    /*------------CON VECTORES--------------*/

    int i;
    pNumeros = (int*) malloc(sizeof(int)*T);

    if(pNumeros!=NULL)
    {
        for(i=0;i<5;i++)
        {
            //*(pNumeros+i)=i+1;
            printf("Ingrese un numero: ");
            scanf("%d", (pNumeros+i));
        }
        for(i=0;i<T;i++)
        {
            printf("%d\n",*(pNumeros+i));
        }
    }
    pAuxNumeros = pNumeros;

    /*------------------REALLOC--------------------*/

    pNumeros = (int*)realloc(pAuxNumeros,sizeof(int)*(T*2));
    pAuxNumeros= NULL;
    if(pAuxNumeros!=NULL)
    {
        for(i=T;i<(T*2);i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", (pAuxNumeros+i));
        }
        for(i=0;i<(T*2);i++)
        {
            printf("%d\n",*(pAuxNumeros+i));
        }
        pNumeros = pAuxNumeros;
        free(pAuxNumeros);
    }
    else
    {
        printf("No hay espacio en memoria.\n");
        printf("Datos del primer malloc: \n");
        for(i=0;i<T;i++)
        {
            printf("%d\n",*(pNumeros+i));
        }
    }
    return 0;
}
