
typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
}sAlumno;

void mostrarAlumno (sAlumno);
sAlumno cargarAlumno();
void cargarListado(sAlumno[], int);
void mostrarListado(sAlumno[], int);
void ordenarPorNombre (sAlumno[], int);

