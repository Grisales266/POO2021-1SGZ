#include "criterio.h"

Criterio::Criterio(){
}

Criterio::Criterio(int cantidadCriterios, string nombreCriterio, int idCriterio, float ponderadoCriterios){
    this->cantidadCriterios = cantidadCriterios;
    this->nombreCriterio = nombreCriterio;
    this->idCriterio = idCriterio;
    this->ponderadoCriterios = ponderadoCriterios;
}
