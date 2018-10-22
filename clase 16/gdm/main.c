#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pEntero;
    pEntero = (int*) malloc(sizeof(int)*5); /**malloc(sizeof(int)*5) crea un array en heap**/
    if( pEntero != NULL)
    {
//        *pEntero = 9;
//        printf("%d", *pEntero);
    int i;
        for(i=0; i < 5; i++)
        {
            printf("Ingrese un numero: \n");
            scanf("%d", pEntero+i);
        }

        for(i=0; i < 5; i++)
        {
            printf("%d--", *(pEntero+i));
        }
    pEntero = realloc(pEntero, sizeof(int)*10);

    }


    return 0;
}
