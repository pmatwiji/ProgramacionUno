#include <stdio.h>
#include <stdlib.h>

int ingresarOpcion (void);
int pedirPrimerDato (int);
int pedirSegundoDato (int);
int sumar (int, int);
int restar (int, int);
int multiplicar (int, int);
int dividir (int, int);

int main()
{
    int opcion;
    int primerDato;
    int segundoDato;
    int datoUno;
    int datoDos;
    int suma;
    int resta;
    int multiplicacion;
    int division;


    do
    {
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");

        opcion=ingresarOpcion();

        switch (opcion)
        {
        case 1:

            datoUno = pedirPrimerDato(datoUno);
            datoDos = pedirSegundoDato(datoDos);
            suma=sumar(datoUno, datoDos);
            printf("El resultado de la suma es: %d\n", suma);
            //printf("Estoy sumando\n");
            break;
        case 2:
            datoUno = pedirPrimerDato(datoUno);
            datoDos = pedirSegundoDato(datoDos);
            resta=restar(datoUno, datoDos);
            printf("El resultado de la resta es: %d\n", resta);
            //printf("Estoy restando\n");
            break;
        case 3:
            datoUno = pedirPrimerDato(datoUno);
            datoDos = pedirSegundoDato(datoDos);
            multiplicacion=multiplicar(datoUno, datoDos);
            printf("El resultado de la multiplicacion es: %d\n", multiplicacion);
            //printf("Estoy multiplicando\n");
            break;
        case 4:
            datoUno = pedirPrimerDato(datoUno);
            datoDos = pedirSegundoDato(datoDos);
            division=dividir(datoUno, datoDos);
            printf("El resultado de la division es: %d\n", division);
            //printf("Estoy dividiendo\n");
            break;
        case 5:
            opcion = 5;
            break;
 /*       default:
            printf("Ingrese un numero valido: \n");
            scanf("%d", &opcion);
            while (opcion > 5)
            {
                printf("Ingrese un numero valido: \n");
                scanf("%d", &opcion);
            }
            break;*/
        }

        system("pause");
        system("cls");
    }
    while (opcion != 5);
    return 0;
}

int ingresarOpcion (void) //funcion para ingresar opcion
{
    int opcion;
    printf("Ingrese un numero: \n");
    scanf("%d", &opcion);
    return opcion;
}
int pedirPrimerDato(int primerDato) //funcion para pedir primer dato
{
    int primerDatoIngresado;
    printf("Ingrese el primer numero: \n");
    scanf("%d", &primerDatoIngresado);
    return primerDatoIngresado;
}
int pedirSegundoDato(int segundoDatoo) //funcion para pedir segundo dato
{
    int segundoDatoIngresado;
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &segundoDatoIngresado);
    return segundoDatoIngresado;
}
int sumar(int datoUno, int datoDos) //funcion para sumar
{
    int suma;
    suma=datoUno+datoDos;
    return suma;
}

int restar(int datoUno, int datoDos) // funcion para restar
{
    int resta;
    resta=datoUno - datoDos;
    return resta;
}

int multiplicar(int datoUno, int datoDos) //funcion para multiplicar
{
    int multiplicacion;
    multiplicacion=datoUno*datoDos;
    return multiplicacion;
}

int dividir(int datoUno, int datoDos) //funcion para dividir
{
    int division;
    division=datoUno/datoDos;
    return division;
}

