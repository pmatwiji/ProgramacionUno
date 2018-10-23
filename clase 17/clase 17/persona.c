#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

ePersona* nuevaPersona()
{
    ePersona* miPersona;

    miPersona = (ePersona*) malloc(sizeof(ePersona));
    if(miPersona != NULL)
    {
        miPersona->id = 0;
        strcpy(miPersona->nombre, "NN");
        miPersona->edad = 0;
    }
    return miPersona;
}

ePersona* nuevaPersonaParametros(int id, char* nombre, int edad)
{
    ePersona* personita;

    personita = nuevaPersona();
    if (personita != NULL)
    {

    }

    return personita;
}

void mostrarPersona (ePersona* this)
{
    printf("%d--%s--%d\n", this->id, this->nombre, this->edad);
}


void ePersona_setId(ePersona* this, int id)
{
    this->id = id;
}

int ePersona_getId(ePersona* this)
{
    int id;

    id = this->id;


}
