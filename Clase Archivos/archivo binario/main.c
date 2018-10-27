#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre;
}sDato;

int main()
{
    FILE* pArchivo;
    sDato dato={1, 'a'};

//    int x = 8;
//    /** .bin para binario **/
//    pArchivo = fopen("archivo.bin", "wb");
//    /** *void(dato que quiero escribir)
//        size(tamaño del dato)
//        size(cantidad de ese tipo de dato)
//        *file(archivo) **/
//    int y = fwrite(&x, sizeof(int), 1, pArchivo);
//    fclose(pArchivo);
//    printf("%d\n", y);

    ///** --------------------------------------------------------- **/

    ///**  LEER EN CONSOLA                                          **/

//    int z;
//    pArchivo = fopen("archivo.bin", "rb");
//    fread(&z, sizeof(int), 1, pArchivo);
//    fclose(pArchivo);
//    printf("%d", z);
//


    ///** --------------------------------------------------------- **/

    ///**  ESCRIBIR STRUCT                                          **/

    pArchivo = fopen("archivo.bin", "wb");
    fwrite(&dato, sizeof(sDato), 1, pArchivo);
    fclose(pArchivo);


    ///** --------------------------------------------------------- **/

    ///**  MOSTRAR STRUCT                                           **/

    pArchivo=fopen("archivo.bin", "rb");
    fread(&dato, sizeof(sDato), 1, pArchivo);
    fclose(pArchivo);
    printf("%d -- %c", dato.id, dato.nombre);

    ///** --------------------------------------------------------- **/


    return 0;
}
