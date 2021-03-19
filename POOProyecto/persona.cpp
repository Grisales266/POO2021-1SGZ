#include <iostream>
#include "persona.h"
using namespace std;

Persona::Persona(){
}

Persona::Persona(string nombre, int id, string email){
    this->nombre = nombre;
    this->id = id;
    this->email = email;
}

