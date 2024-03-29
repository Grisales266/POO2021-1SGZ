#ifndef CLASEACTA_H
#define CLASEACTA_H
#include <fstream>
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

enum EstadoCalificacion{
    aprobado = 1, rechazado, pendiente
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
        EstadoActa estadoActa;
        EstadoCalificacion estadoCalificacion;
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
        EstadoCalificacion getEstadoCalificacion();
        int getRolActa();
        EstadoActa getEstadoActa();
        TipoDeTrabajo getTipoDeTrabajo();
        void mostrarJurado2();
        void mostrarJurado1();
        void crearCriterios();
        void mostrarDetallesDeActa();
        void metodoCalcularNotaFinal();
        float getNotaFinal();
        void cambiarEstadoActa();
        void metodoCrearTxt();
};

#endif



  