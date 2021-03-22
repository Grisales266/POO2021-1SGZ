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
        int cantidadCriterios;
        float notaFinal;
    public:
        Acta();
        Acta(string, int, Persona, string, TipoDeTrabajo, Persona, Persona, Persona, Persona, int);
        void mostrarActa();
        int getIdActa();
        int getIdJurado1();
        int getIdJurado2();
        int getRolJurado1();
        int getRolJurado2();
        int getIdDirector();
        int getRolDirector();
        int getRolActa();
        EstadoActa getEstadoActa();
        TipoDeTrabajo getTipoDeTrabajo();
        float getNotalFinal();
        void mostrarJurado2();
        void mostrarJurado1();
        void crearCriterios();
        void mostrarDetallesDeActa();
<<<<<<< HEAD
        void metodoCalcularNotaFinal();
=======

>>>>>>> 2d0ef191ad4216ee6233c3b70fed473e35bf917c
};

#endif



  