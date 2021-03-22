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
    public:
        Universidad();
        Universidad(list<Persona>, list<Acta>);
        void crearPersona();
        Persona buscarPersona(int);
        int comprobarExistenciaPersona(int);
        void mostrarTodosPersona();
        void setPersonasNulas();
        void crearActa();
        Acta buscarActa(int);
        int comprobarExistenciaActa(int);
        void mostrarTodasActa();
        void crearCriterio();
        void consultarTipoDeTrabajo();
        void consultarTrabajosDeUnDirector();//Trabajos que ha dirigido un profesor
        void consultarTrabajosDeUnJurado();
        void consultarListaJuradosDeActasRegistradas();//TODO realizar cambios en el metodo para que no hallan repetidos
        void mostrarTodasDetalleActa();
<<<<<<< HEAD
        void calcularNotaFinal();
        string obtenerFechaSistema();
        //void consultarActasPorEstados();
=======
        void mostrarJuradosInternosOExtenos();
        void consultarActasPendienteORechazadas();
        int comprobarSiElementoEnUnaLista(list<int> , int );

>>>>>>> 2d0ef191ad4216ee6233c3b70fed473e35bf917c
};


#endif
