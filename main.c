#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero=159;
    float unFlotante=2.50;
    char unChar='a';
    int numeroIngresado;
    char charIngresado;

    printf("Sarasa sarasa lalala!\n");
    printf("esta es la segunda linea\n");
    printf("El numero es: %d\nEl numero flotante es: %f \nEl caracter es: %c\n",unNumero, unFlotante, unChar );

    printf("Ingrese un numero: ");
    scanf("%d", &numeroIngresado);
    printf("El numero es: %d\n", numeroIngresado);

    printf("Ingrese una letra: ");
    fflush(stdin);
    //setbuf(stdin,NULL);
    scanf("%c", &charIngresado);
    printf("La letra es: %c", charIngresado);


    return 0;
}
