#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}eDato;

eDato* funcion(int x, char y);

int main()
{

/*
    eDato datito= {45, 'a'};-
    eDato* pDato;
    pDato = &datito;

    int x;
    x = (*pDato).a;

    printf("%d", x);

*/

/*
    eDato datito [2]= {{45, 'a'},{30, 'b'}};
    eDato* pDato;
    pDato = datito;

    int i;
    for(i=0; i < 2; i++)
    {
//        printf("%d\n", (*(pDato+i)).a);
          printf("%d\n", (pDato+i)->a);
//        printf("%c\n", (*(pDato+i)).b);
          printf("%c\n", (pDato+i)->b);
    }
*/

    eDato* p;
    p = funcion(45, 'a');
    printf("%d -- %c\n", p->a, p->b );

    eDato* q;
    q = funcion(20, 'h');
    printf("%d -- %c\n", q->a, q->b );


    return 0;
}


eDato* funcion(int x, char y)
{
    eDato* pDato;
    eDato datito;
    pDato = &datito;

    pDato->a = x;
    pDato->b = y;

    return pDato;
}
