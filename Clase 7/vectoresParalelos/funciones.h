
typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
} sAlumno;


void mostrarAlumno (sAlumno);
sAlumno cargarAlumno();
void cargarListado(sAlumno[], int);
void mostrarListado(sAlumno[], int);
void ordenarPorNombre (sAlumno[], int);
void mostrarAprobados(sAlumno[], int);

//int cantidadDeJuanes(int, char[][21], int);

//void nombreEmpiezaConP(sAlumno listado[], int);

//void mejoresNotas (char[][21], int[], int);

//void elMasMediocre(int[], char[][21], int[], float[], int);

//void modificarNota (int[], int[], int);


