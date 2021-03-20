#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include "acta.h"
#include "persona.h"
#include "detalleActa.h"
#include <iostream>
using namespace std;


class Universidad{
    private:
        list<Persona> listaDePersonas;
        list<Acta> listaDeActas;
    public:
        Universidad();
        Universidad(list<Persona>, list<Acta>);
        void crearPersona();
        Persona buscarPersona(int);
        int comprobarExistenciaPersona(int);
        void mostrarTodosPersona();
        void crearActa();
        Acta buscarActa(int);
        int comprobarExistenciaActa(int);
        void mostrarTodasActa();
        //void introducirCalificaciones();
        void consultarTipoDeTrabajo();
};


#endif
