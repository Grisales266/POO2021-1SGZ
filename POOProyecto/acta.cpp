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

void Acta::mostrarActa(){
    cout << "==================" << endl;
    cout << "Fecha: " << this->fecha << endl;
    cout << "Id acta: " << this->numeroId << endl;
    cout << "Autor: " << endl;
    autor.mostrarPersona();
    cout << "Nombre de trabajo: " << this->nombreTrabajo << endl;
    cout << "Tipo de producto: " << this->tipoDeTrabajo << endl;
    cout << "Director: " << endl;
    director.mostrarPersona();
    cout << "Codirector: " << endl;
    codirector.mostrarPersona();                
    cout << "Jurado 1: " << endl;
    jurado1.mostrarPersona();
    cout << "Jurado 2: " << endl;
    jurado2.mostrarPersona();
}

int Acta::getIdActa(){
    return this->numeroId;
}

TipoDeTrabajo Acta::getTipoDeTrabajo()
{
    return this->tipoDeTrabajo;
}
EstadoActa Acta::getEstadoActa()
{
    return this->estadoActa;
}