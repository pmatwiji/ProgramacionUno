#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int v[5],pos,i;
    char seguir;
    for(i=0; i<5; i++)
        v[i]=0; // inicializamos vector
    do
    {
        printf("Ingrese posici¢n");
        scanf("%d",&pos);
        printf("Ingrese valor a cargar en el vector");
        scanf("%d",&v[pos]);
        fflush(stdin);
        printf("Desea ingresar otro dato S/N?");
        scanf("%c",&seguir);
    }
    while(seguir=='s');
}
