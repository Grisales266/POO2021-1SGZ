#include <iostream>
#include "claseCriterios.h"
using namespace std;

Criterios::Criterios(){
}

Criterios::Criterios(int cantidadCriterios, int idCriterio, string nombreCriterio, float ponderadoCriterios){
    this->cantidadCriterios = cantidadCriterios;
    this->idCriterio = idCriterio;
    this->nombreCriterio = nombreCriterio;
    this->ponderadoCriterios = ponderadoCriterios;
}

void crearListaDeCriterios(){
};