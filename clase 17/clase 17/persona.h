
typedef struct
{
    int id;
    char nombre[20];
    int edad;
}ePersona;

ePersona* nuevaPersona();
ePersona* nuevaPersonaParametros(int, char*, int);
void mostrarPersona(ePersona*);

void ePersona_setId(ePersona*, int);
int ePersona_getId(ePersona*);
