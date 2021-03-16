#include <iostream>
#include "claseActa.h"
using namespace std;

Acta::Acta(){
}

Acta::Acta(string fecha, int numeroId, string nombreAutor, enum tipoDeTrabajo, int periodo, string nombreDirector, string nombreCodirector, string nombreJurado1, string nombreJurado2, enum estadoActa){
    this->numeroId = numeroId;
    this->fecha = fecha;
    this->nombreAutor = nombreAutor;
    this->tipoDeTrabajo = tipoDeTrabajo;
    this->periodo = periodo;
    this->nombreDirector = nombreDirector;
    this->nombreCodirector = nombreCodirector;
    this->nombreJurado1 = nombreJurado1;
    this->nombreJurado2 = nombreJurado2;
    this->estadoActa = estadoActa;
}

