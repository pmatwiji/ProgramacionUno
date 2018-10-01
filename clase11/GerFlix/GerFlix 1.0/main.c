#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define CANTIDAD 15
#define SERIES 5
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

//    1. Mostrar el listado de series
    mostrarListaSeries(listaDeSeries, SERIES);
//    2. Mostrar el listado de usuarios
    mostrarListaUsuarios(listaDeUsuarios, CANTIDAD);
//    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
//    4. Mostrar por cada serie, el nombre de los usuarios que la ven.





    return 0;
}
