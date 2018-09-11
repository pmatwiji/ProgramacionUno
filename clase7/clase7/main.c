#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char cadena1 [5];
    char cadena2 [100] = "hola como estas?";

    strncpy(cadena1, cadena2, 4);  //donde lo copia, lo que copia, cantidad de caracteres que copia

    puts(cadena1);



    //atol = parseint
    //atof = parsefloat
    //isdigit valida que sean numeros

    return 0;
}
