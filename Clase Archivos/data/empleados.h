typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    int isEmpty;
} sEmpleado;

sEmpleado* constructor(int id, char* nombre, char* apellido);
