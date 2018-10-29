#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    int enteros[10]= {1,2,3,4,5,6,7,8,9,10};
    int i=0;

    /** IMPRIMIR ENTEROS **/
    pArchivo = fopen("enteros.bin", "wb");
    for (i=0; i<10; i++)
    {
        fwrite(enteros, sizeof(enteros), 10, pArchivo);
    }
    fclose(pArchivo);

    /** MOSTRAR ENTEROS **/
    pArchivo = fopen("enteros.bin", "rb");
    fread(enteros, sizeof(enteros), 10, pArchivo);
    fclose(pArchivo);
    for (i=0; i<10; i++)
    {
        printf("%d\n",enteros[i]);
    }


    return 0;
}
