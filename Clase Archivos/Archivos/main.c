#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;

//
///** -------------------------------------------------------- **/
///**  ESCRIBIR EN UN TXT                                      **/
//    /** FILE* = fopen(PATH, MODE) **/
//    pArchivo = fopen("saludo.txt", "w"); /** si el path no existe, lo crea **/
//    char cadena[50] = "Sarasa";
//    fprintf(pArchivo, "hola %s, como estas? \nTodo bien", cadena);
//    fclose(pArchivo);
//
///** --------------------------------------------------------- **/
//
///**  ESCRIBIR EN CONSOLA EL TXT                               **/
//
//
//    char texto[50];
//    char otro[50];
//    pArchivo = fopen("saludo.txt", "r");
//    /** "r" de read **/
//    fgets(texto, 50, pArchivo);
//    /** fgets lee solo una linea, no sirve con contrabarra N **/
//    fgets(otro, 50, pArchivo);
//    fclose(pArchivo);
//    puts(texto);
//    puts(otro);
//
///** --------------------------------------------------------- **/

/** ESCRBIR VARIOS                                            **/

    pArchivo = fopen("saludo.txt", "w");
    fprintf(pArchivo, "ola\nke\naze");
    fclose(pArchivo);

/** --------------------------------------------------------- **/

/** LEER VARIOS                                               **/

    char textos[3][50];
    int i = 0;
    pArchivo = fopen("saludo.txt", "r");
    while(!feof(pArchivo))
    {
        fgets(textos[i], 50, pArchivo);
        i++;
    }
    fclose(pArchivo);

    for (i=0; i<3;i++)
    {
        puts(textos[i]);
    }

/** --------------------------------------------------------- **/
    return 0;
}
