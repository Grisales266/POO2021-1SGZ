#include <iostream>
#include "claseJurado.h"
using namespace std;

Jurado::Jurado(){
}

Jurado::Jurado(string nombre, int id, enum pertenenciaALaUni){
    this->nombre = nombre;
    this->id = id;
    this->pertenenciaALaUni = pertenenciaALaUni;
}

void Jurado::diligenciarCalficaciones(){
}

void Jurado::diligenciarComentarios(){
}