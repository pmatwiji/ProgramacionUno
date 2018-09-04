#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int vector[T]= {5,3,1,2,4};
    //tipo nombre[N];
    //limite inferio = 0
    //limite superior = N-1
//    vector[2]=9;
//    printf("%d", vector[2]);
    int i;
    int j;
    int aux; //mismo tipo que dato de comparacion

    for(i=0; i<T-1; i++)
    {
        for(j=i+1; j<T; j++)
        {
            if(vector[i]<vector[j])
            {
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
        }
    }

/*    for(i=0; i<T; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
*/
    printf("\nTodos los numeros: \n");
    for(i=0; i<T; i++)
    {
        printf("%d\n", vector[i]);
    }

/*    printf("\nTodos los numeros pares: \n");
    for(i=0; i<T; i++)
    {
        if (vector[i]%2==0)
        {
            printf("%d\n", vector[i]);
        }
    }
*/
    return 0;
}
