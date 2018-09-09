#include <stdio.h>
#include <stdlib.h>
#define MAX 5



void main(void)
{
    int edad[MAX],i,leg;
    float sueldo[MAX],suma=0,prom,aux;
    char seguir;

    //carga secuencial

    /*for(i=0; i<MAX; i++)
    {
        printf("Ingrese la edad del legajo %d: ",i+1);
        scanf("%d",&edad[i]);
        printf("Ingrese el sueldo del legajo %d: ",i+1);
        scanf("%f",&aux);
        sueldo[i]=aux;
    }
    for(i=0; i<MAX; i++)
        suma=suma+sueldo[i];
    prom=suma/MAX;
    printf("El sueldo promedio es %.2f",prom); */

    for(i=0; i<MAX; i++)
    {
        edad[i]=0;
        sueldo[i]=0;
    }
    do
    {
        printf("Ingrese Legajo: ");
        scanf("%d",&leg);
        printf("Ingrese Edad: ");
        scanf("%d",&edad[leg-1]);
        printf("Ingrese el sueldo: ");
        scanf("%f",&aux);
        sueldo[i]=aux;
        fflush(stdin);
        printf("Desea ingresar otro dato S/N?");
        scanf("%c",&seguir);
    }
    while(seguir=='s');
    for(i=0; i<MAX; i++)
        suma=suma+sueldo[i];
    prom=suma/MAX;
    printf("El sueldo promedio es %.2f",prom);




}
