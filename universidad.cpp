#include <iostream>
#include "universidad.h"
using namespace std;

Universidad::Universidad(){
};

Universidad::Universidad(list<Persona> listaDePersonas, list<Acta> listaDeActas){
    this->listaDePersonas = listaDePersonas;
    this->listaDeActas = listaDeActas;
}

void Universidad::crearListaDePersonas(){
    /*Aquí se hará el primer método de la clase universidad*/
}

void Universidad::crearListaActasDeGrado(){
    /*Aquí se hará el segundo método de la clase universidad*/
}