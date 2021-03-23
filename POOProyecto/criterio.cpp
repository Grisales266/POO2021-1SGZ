#include "criterio.h"

Criterio::Criterio(){
}

Criterio::Criterio (string nombreCriterio, int idCriterio, float ponderadoCriterio){
    this->nombreCriterio = nombreCriterio;
    this->numeroCriterio = idCriterio;
    this->ponderadoCriterio = ponderadoCriterio;
}

void Criterio::mostrarCriterio(){
    cout << "Numero de criterio: " << this->numeroCriterio << endl;
    cout << "Descripcion de criterio " << this->numeroCriterio <<  ": " << this->nombreCriterio << endl;
    cout << "Ponderado de criterio " << this->numeroCriterio <<  ": "  << this->ponderadoCriterio << "%" << endl;
}

void Criterio::mostrarCriterioTxt(){
    ofstream archivo;
    archivo << "Numero de criterio: " << this->numeroCriterio << endl;
    archivo << "Descripcion de criterio " << this->numeroCriterio <<  ": " << this->nombreCriterio << endl;
    archivo << "Ponderado de criterio " << this->numeroCriterio <<  ": "  << this->ponderadoCriterio << "%" << endl;
}