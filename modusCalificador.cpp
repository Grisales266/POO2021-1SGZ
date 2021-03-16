#include <iostream>
#include "modusCalificador.h"
using namespace std;

ModusCalificador::ModusCalificador(){
}

ModusCalificador::ModusCalificador(list<Criterios> listaDeCriterios){
    this->listaDeCriterios = listaDeCriterios;
}

void ModusCalificador::calcularNotaFinal(){
}