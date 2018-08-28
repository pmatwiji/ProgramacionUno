#include <stdio.h>
#include <stdlib.h>

//1-declarar funcion
//2-llamada a la funcion
//3-desarrollo de la funcion

//queDevuelve comoSeLlama (queRecibe)

void sumarUno(void);
void sumarDos(int, int);
int sumarTres(void);
int sumarCuatro(int, int);


int main()
{
    /* //caso1
       int numeroUno;
       int numeroDos;
       int suma;

       printf("ingrese el primer numero: ");
       scanf("%d", &numeroUno);
       printf("ingrese el segundo numero: ");
       scanf("%d", &numeroDos);

       suma = numeroUno+numeroDos;
       printf("La suma es %d", suma);
    */
    /*  //caso2
        int numeroUno;
        int numeroDos;
        int suma;

        printf("ingrese el primer numero: ");
        scanf("%d", &numeroUno);
        printf("ingrese el segundo numero: ");
        scanf("%d", &numeroDos);

    */
    //sumarUno();
    //sumarDos(numeroUno, numeroDos);
    /* //caso 3 int suma;
    suma= sumarTres();
    printf("la suma es %d", suma);
    */
    //caso 4
    int numeroUno;
    int numeroDos;
    int suma;

    printf("ingrese el primer numero: ");
    scanf("%d", &numeroUno);
    printf("ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = sumarCuatro(numeroUno, numeroDos);
    printf("la suma es %d", suma);
    return 0;
}


void sumarUno(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("ingrese el primer numero: ");
    scanf("%d", &numeroUno);
    printf("ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno+numeroDos;
    printf("La suma es %d", suma);
}

void sumarDos(int n1,int n2)
{
    int suma;
    suma = n1+n2;
    printf("La suma es %d", suma);
}

int sumarTres(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("ingrese el primer numero: ");
    scanf("%d", &numeroUno);
    printf("ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma= numeroUno + numeroDos;

    return suma;
}

int sumarCuatro(int numeroUno, int numeroDos)
{
    int suma;
    suma= numeroUno+numeroDos;
    return suma;
}
