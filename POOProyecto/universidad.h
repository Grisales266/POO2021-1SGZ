#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include "acta.h"
#include "persona.h"
#include "detalleActa.h"
#include <iostream>
#include<stdio.h>
#include<time.h>//Usado para obtener fecha del sistema
#include<string>
using namespace std;


class Universidad{
    private:
        list<Persona> listaDePersonas;
        list<Acta> listaDeActas;
        list<Criterio> crearListaDeCriterios;
    public:
        Universidad();
        Universidad(list<Persona>, list<Acta>, list<Criterio>);
        void crearPersona();
        Persona buscarPersona(int);
        int comprobarExistenciaPersona(int);
        void mostrarTodosPersona();
        void crearActa();
        Acta buscarActa(int);
        int comprobarExistenciaActa(int);
        void mostrarTodasActa();
        void crearCriterio();
        //void introducirCalificaciones();
        void consultarTipoDeTrabajo();
        string obtenerFechaSistema();
        void consultarTrabajosDeUnJurado();
        //void consultarActasPorEstados();
};


#endif
