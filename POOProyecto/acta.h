#ifndef CLASEACTA_H
#define CLASEACTA_H
#include <iostream>
#include "persona.h"
#include "detalleActa.h"

using namespace std;
#include <list>
using std::string;

enum EstadoActa{
    abierto = 1, cerrado
};

enum TipoDeTrabajo{
    industrial = 1, investigacion
};

class Acta{
    private:
        int numeroId;
        string fecha;
        Persona autor;
        string nombreTrabajo;
        TipoDeTrabajo tipoDeTrabajo;
        int periodo;
        Persona director;
        Persona codirector;
        Persona jurado1;
        Persona jurado2;
        EstadoActa estadoActa = abierto;
        list<DetalleActa>listaDetallesActa;
    public:
        Acta();
        Acta(string, int, Persona, string, TipoDeTrabajo, Persona, Persona, Persona, Persona);
        
};

#endif



  