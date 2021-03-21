#include "criterio.h"

Criterio::Criterio(){
}

Criterio::Criterio (string nombreCriterio, int idCriterio, float ponderadoCriterios){
    this->nombreCriterio = nombreCriterio;
    this->numeroCriterio = idCriterio;
    this->ponderadoCriterios = ponderadoCriterios;
}

void Criterio::mostrarCriterio(){
    cout << "Numero de criterio: " << this->numeroCriterio << endl;
    cout << "Descripcion de criterio " << this->numeroCriterio <<  ": " << this->nombreCriterio << endl;
    cout << "Ponderado de criterio " << this->numeroCriterio <<  ": "  << this->ponderadoCriterios << "%" << endl;
}
