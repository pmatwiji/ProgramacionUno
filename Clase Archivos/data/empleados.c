#include <stdio.h>
#include <stdlib.h>
#include "empleados.h"

sEmpleado* constructor(int id, char* nombre, char* apellido)
{
    sEmpleado* empleado;
    empleado = malloc(sizeof(sEmpleado));

    if(empleado!=NULL)
    {
        empleado->id=id;
        strcpy(empleado->nombre, nombre);
        strcpy(empleado->apellido, apellido);
    }

    return empleado;
}
