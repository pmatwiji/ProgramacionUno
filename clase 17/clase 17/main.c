#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

int main()
{
    ePersona* personita;
    personita = nuevaPersona(); /** constructor por defecto **/

    if (personita != NULL)
    {
        mostrarPersona(personita);
    }

    ePersona* otraPersonita;
    otraPersonita = nuevaPersonaParametros(45,"Maria", 49);
    if(otraPersonita != NULL)
    {
        mostrarPersona(otraPersonita);
    }
    return 0;
}


