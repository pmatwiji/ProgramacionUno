#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[24];
    int legajo;
    float sueldo;
}sEmpleado;

sEmpleado* new_Empleado();
sEmpleado* new_EmpleadoParametros();
sEmpleado* new_EmpleadoCarga();
sEmpleado* new_EmpleadoCargaArray(sEmpleado*);

int main()
{
//    sEmpleado arrayTres[3];
//    sEmpleado* pArray;
//    int i;
//
//    pArray= arrayTres;


    sEmpleado* array = new_EmpleadoParametros();
    printf("%d -- %s -- %.2f\n\n", array->legajo, array->nombre, array->sueldo);

    sEmpleado* arrayDos = new_EmpleadoCarga();
    printf("%d -- %s -- %.2f\n\n", arrayDos->legajo, arrayDos->nombre, arrayDos->sueldo);

//    for(i=0;i<3;i++)
//    {
//        new_EmpleadoCargaArray(pArray);
//    }


    return 0;
}

sEmpleado* new_Empleado()
{
    sEmpleado* empleadoRetorno;
    empleadoRetorno = (sEmpleado*) malloc(sizeof(sEmpleado));
    return empleadoRetorno;
}

sEmpleado* new_EmpleadoParametros()
{
    sEmpleado* empleadoRetorno;
    empleadoRetorno = new_Empleado();
    strcpy(empleadoRetorno->nombre, "Juan");
    empleadoRetorno->legajo = 1;
    empleadoRetorno->sueldo = 5000;
    return empleadoRetorno;
}

sEmpleado* new_EmpleadoCarga()
{
    sEmpleado* empleadoRetorno;
    empleadoRetorno = new_Empleado();
    printf("Ingrese el legajo: ");
    scanf("%d", &empleadoRetorno->legajo);
    printf("Ingrese el nombre: ");
    scanf("%s", empleadoRetorno->nombre);
    printf("Ingrese el sueldo: ");
    scanf("%f", &empleadoRetorno->sueldo);
    return empleadoRetorno;
}

//sEmpleado* new_EmpleadoCargaArray(sEmpleado* pArray)
//{
//    sEmpleado* empleadoRetorno;
//    empleadoRetorno = new_Empleado();
//    printf("Ingrese el legajo: ");
//    scanf("%d", (pArray+i)->legajo);
//    printf("Ingrese el nombre: ");
//    scanf("%s", (pArray+i)->nombre);
//    printf("Ingrese el sueldo: ");
//    scanf("%f", (pArray+i)->sueldo);
//    return empleadoRetorno;
//}
