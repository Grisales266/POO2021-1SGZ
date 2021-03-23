#include "acta.h"

Acta::Acta(){
}

Acta::Acta(string fecha, int numeroId, Persona autor, string nombreTrabajo, TipoDeTrabajo tipoDeTrabajo, Persona director, Persona codirector, Persona jurado1, Persona jurado2, int cantidadCriterios){
    this->fecha = fecha;
    this->numeroId = numeroId;
    this->autor = autor;
    this->nombreTrabajo = nombreTrabajo;
    this->tipoDeTrabajo = tipoDeTrabajo;
    this->director = director;
    this->codirector = codirector;
    this->jurado1 = jurado1;
    this->jurado2 = jurado2;
    this->cantidadCriterios = cantidadCriterios;
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
    
}
int Acta::getRolDirector()
{
    return this->director.getRolPersona();
}
int Acta::getIdDirector()
{
    return this->director.getId();
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

int Acta::getIdActa(){
    return this->numeroId;
}

TipoDeTrabajo Acta::getTipoDeTrabajo()
{
    return this->tipoDeTrabajo;
}

void Acta::crearCriterios(){
    int x;
    float ponderadoU, notaJurado1, notaJurado2, notaPonderada, notaPromedio;
    string criterioU, comentarioJurado;
    for(x = 1; x <= this->cantidadCriterios; x++){
        cout << "Cual es la descripcion del criterio " << x << " : ";
        cin.ignore();
        getline(cin, criterioU);
        cout << "Cual es el ponderado de este criterio " << x << " ?: ";
        cin >> ponderadoU;
        Criterio criterioTemporal(criterioU, x, ponderadoU);
        cout << "Cual es el la nota del jurado 1 para el criterio " << x << ": ";
        cin >> notaJurado1;
        cout << "Cual es el la nota del jurado 2 para el criterio " << x << ": ";
        cin >> notaJurado2;
        cout << "Cual es el comentario de los jurados para el criterio " << x << ": ";
        cin.ignore();
        getline(cin, comentarioJurado);
        notaPonderada = (((notaJurado1 + notaJurado2) / 2) * (ponderadoU/100));
        notaPromedio = ((notaJurado1 + notaJurado2) / 2);
        this->listaDetallesActa.push_back(DetalleActa(criterioTemporal, notaJurado1, notaJurado2, comentarioJurado, notaPonderada, notaPromedio));
    }
}

EstadoActa Acta::getEstadoActa()
{
    return this->estadoActa;
}

void Acta::mostrarDetallesDeActa(){
    for(list<DetalleActa>::iterator itActas = listaDetallesActa.begin(); itActas != listaDetallesActa.end(); itActas++)
        {
            itActas->mostrarDetallesDeActa();
        }
}

void Acta::metodoCalcularNotaFinal(){
    float notaPonderadaAcumulada = 0;
    for (list<DetalleActa>::iterator it = listaDetallesActa.begin(); it != listaDetallesActa.end(); it++)
    {
        notaPonderadaAcumulada += it->getNotaPonderada();
    }
    this->notaFinal = notaPonderadaAcumulada;
    cout << "La nota final es: " << notaPonderadaAcumulada;
}

float Acta::getNotaFinal()
{
    return this->notaFinal;
}

void Acta::mostrarJurado1()
{
    jurado1.mostrarPersona();
}

void Acta::mostrarJurado2()
{
    jurado2.mostrarPersona();
}
void Acta::getDetallesActa()
{
    cout<< listaDetallesActa <<endl;
}