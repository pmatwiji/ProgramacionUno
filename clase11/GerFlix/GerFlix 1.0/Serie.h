
typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;

void inicializarSeriesEstado(eSerie[], int);
void inicializarSeriesHardCode(eSerie[]);
void mostrarListaSeries(eSerie[], int);

void mostrarSerie(eSerie);
int retornarIdDeSerie(eSerie listado[], int cantidad, eSerie unaSerie);
int retornarIdDeSerieInt(eSerie listado[], int cantidad, eSerie unaSerie)
