
typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
    int estado;
}sAlumno;

void mostrarAlumno (sAlumno);
sAlumno cargarAlumno();
void cargarListado(sAlumno listado[], int);
void mostrarListado(sAlumno listado[], int);
void ordenarPorNombre (sAlumno listado[], int);
//void modificarListado(sAlumno listado[], int);

