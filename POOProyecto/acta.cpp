#include "acta.h"

Acta::Acta(){
}

Acta::Acta(string fecha, int numeroId, Persona autor, string nombreTrabajo, TipoDeTrabajo tipoDeTrabajo, Persona director, Persona codirector, Persona jurado1, Persona jurado2){
    this->fecha = fecha;
    this->numeroId = numeroId;
    this->autor = autor;
    this->nombreTrabajo = nombreTrabajo;
    this->tipoDeTrabajo = tipoDeTrabajo;
    this->director = director;
    this->codirector = codirector;
    this->jurado1 = jurado1;
    this->jurado2 = jurado2;
}

