#include "criterio.h"

Criterio::Criterio(){
}

Criterio::Criterio (string nombreCriterio, int idCriterio, float ponderadoCriterios){
    this->nombreCriterio = nombreCriterio;
    this->numeroCriterio = idCriterio;
    this->ponderadoCriterios = ponderadoCriterios;
}

