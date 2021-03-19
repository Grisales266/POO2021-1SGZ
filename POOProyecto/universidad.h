#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include "acta.h"
#include "persona.h"
#include <iostream>
using namespace std;


class Universidad{
    private:
        list<Persona> listaDePersonas;
        list<Acta> listaDeActas;
    public:
        Universidad();
        Universidad(list<Persona>, list<Acta>);
        Persona buscarPersona(int);
        void getIdTemporal(Persona);
        void crearActa();
        void crearPersona();
        void crearListaActasDeGrado();
        void crearListaDePersonas();
};

#endif
