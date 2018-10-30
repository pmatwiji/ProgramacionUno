#include <stdio.h>
#include <stdlib.h>
#include "empleados.h"

int main()
{
    char name[500], lastName[500], id[500],isEmpty[500];
    int cont=1;
    sEmpleado lista[10];
    FILE * pFile;

    pFile = fopen ("data.csv", "r");

    while(cont<10)
   {


       fscanf(pFile, "%[^,],%[^,],%[^\n]\n", id, name, lastName);
       /**lee todo y excluye la coma. el ultimo lo lee y excluye el contrabarra N **/

       sEmpleado* e = constructor(atoi(id), name, lastName);
       lista[cont]=*e;
       cont++;

       //printf("%s - %s- %s\n", id, name, lastName);

   }

   fclose(pFile);
   int i;

   for(i=0; i<10; i++)
   {
       printf("%d - %s- %s\n", lista[i].id, lista[i].nombre, lista[i].apellido);
   }

    return 0;
}
