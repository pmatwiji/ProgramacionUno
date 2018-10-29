#include <stdio.h>
#include <stdlib.h>

//int guardarEnTXT (array, tam, nombre)
//{
//    FILE* pArchivo;
//    pArchivo = fopen("enteros.txt", "w");
//}
//
//int guardarEnBIN (array, tam, nombre)
//{
//    FILE* pArchivo;
//    pArchivo = fopen("enteros.bin", "wb");
//}


int main()
{
    FILE* pArchivo;
    int enteros[10]= {1,2,3,4,5,6,7,8,9,10};
    char numeros[10][10];
    int i=0;

    /** IMPRIMIR ENTEROS **/
    pArchivo = fopen("enteros.txt", "w");
    for (i=0; i<10; i++)
    {
        fprintf(pArchivo, "%d\n", enteros[i]);
    }
    fclose(pArchivo);

    /** MOSTRAR ENTEROS **/
    pArchivo = fopen("enteros.txt", "r");

    while(!feof(pArchivo))
    {
        fgets(numeros, 10, pArchivo);
        i++;
    }
    fclose(pArchivo);

    for (i=0; i<10; i++)
    {
        puts("%d\n",enteros[i]);
    }


    return 0;
}
