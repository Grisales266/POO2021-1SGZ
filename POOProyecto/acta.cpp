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
    cout << "Autor: ";
    cout << autor.getNombrePersona() << endl;
    cout << "Nombre de trabajo: " << this->nombreTrabajo << endl;
    cout << "Tipo de trabajo: " << this->tipoDeTrabajo << endl;
    cout << "Director: ";
    cout << director.getNombrePersona() << endl;
    cout << "Codirector: ";
    cout << codirector.getNombrePersona() << endl;                
    cout << "Jurado 1: ";
    cout << jurado1.getNombrePersona() << endl;
    cout << "Jurado 2: ";
    cout << jurado2.getNombrePersona() << endl;
    cout << "==================" << endl;
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
int Acta::getIdJurado1()
{
    return this->jurado1.getId();
}

int Acta::getIdJurado2()
{
    return this->jurado2.getId();
}

int Acta::getRolJurado1()
{
    return this->jurado1.getRolPersona();
}

int Acta::getRolJurado2()
{
    return this->jurado2.getRolPersona();
}
