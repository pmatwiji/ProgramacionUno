#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[500], lastName[500], id[500],isEmpty[500];
    int cont=1;

    FILE * pFile;

    pFile = fopen ("data.csv", "r");

    while(!feof(pFile))
   {
       cont++;
       fscanf(pFile, "%[^,],%[^,],%[^\n]\n", id, name, lastName);
       /**lee todo y excluye la coma. el ultimo lo lee y excluye el contrabarra N **/

       printf("%s - %s- %s\n", id, name, lastName);

   }

   fclose(pFile);

    return 0;
}
