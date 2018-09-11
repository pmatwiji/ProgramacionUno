#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena [20]= "perro"; // = {'h','o','l','a'}; //"hola"
    char cadena2 [20] = "gato";
    int cantidad;
    int estado;
    /* cantidad = strlen(cadena); //devuelve int con cantidad de chars
    printf("%d", cantidad);*/

    /*strcpy(cadena, "gato");
    // primer valor es donde lo va a copiar, segundo es lo que copia
    printf("%s", cadena);*/


    //compara palabras
    // 0 son iguales
    // -1 o 1 son distitntos
    //estado = strcmp(cadena, "perro");

    strupr(cadena); //to upper
    //strlwr(cadena); //to lower
    //puts(cadena);  //solo por referencia, sin editar dentro
    //printf("%d", estado);

    strcat(cadena2, cadena); //al primero le concateno el segundo
    puts(cadena2);

    return 0;
}

/*
    printf("ingrese texto: ");
    fflush(stdin);
    //scanf("%s", &cadena);
    gets(cadena);
    printf("%s", cadena);
*/



/*
//cadenas
nombre 20
apellido 20
apellido y nombre 40

nombre: juan carlos
apellido gomez
apellido y nombre gomez, juan carlos


*/
