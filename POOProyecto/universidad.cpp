#include <iostream>
#include "universidad.h"
#include "acta.h"
#include "persona.h"
using namespace std;

Universidad::Universidad(){
};

Universidad::Universidad(list<Persona> listaDePersonas, list<Acta> listaDeActas){
    this->listaDeActas = listaDeActas;
    this->listaDePersonas = listaDePersonas;
}

void Universidad::crearActa(){
    int existenciaCodirector, idActa, idAutor, idDirector, idCodirector, idJurado1, idJurado2, tipoDeTrabajoU;
    string fechaU, nombreTrabajoU;
    cout << "Ingrese la fecha del acta de grado: ";
    cin >> fechaU;
    cout << "Ingrese el numero id de acta: ";
    cin >> idActa;
    cout << "Ingrese el nombre del autor: ";
    cin >> idAutor;
    cout << "1.Industria.\n2.Investigacion.\nCual es el tipo de trabajo?: ";
    cin >> tipoDeTrabajoU;
    cout << "Ingrese el id del director: ";
    cin >> idDirector;
    cout << "1.Si.\n2.No.\nExiste el codirector?: ";
    cin >> existenciaCodirector;
    if(existenciaCodirector == 1){
        cout << "Ingrese el id del codirector: ";
        cin >> idCodirector;
    };
    else{
        idCodirector = 123456;
    };
    cout << "Ingrese el id del jurado 1: ";
    cin >> idJurado1;
    cout << "Ingrese el id del jurado 2: ";
    cin >> idJurado2;
    this->listaDeActas.push_back(Acta(fechaU, idActa, idAutor, tipoDeTrabajoU, idDirector, idCodirector, idJurado1, idJurado2));

}

void Universidad::crearPersona(){
    cout << "Ingrese el nombre de la persona: ";
    cin >> nombreU;
    cout << "Ingrese el numero id de la persona: ";
    cin >> idU;
    cout << "Ingrese el email de la persona: ";
    cin >> emailU;
    this->listaDePersonas.push_back(Persona(nombreU, idU, emailU))
}

void Universidad::crearListaActasDeGrado(){
    /*Aquí se hará el segundo método de la clase universidad*/
}

void Universidad::crearListaDePersonas(){
    /*Aquí se hará el primer método de la clase universidad*/
}

