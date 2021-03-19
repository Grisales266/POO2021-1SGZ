#include "persona.h"

Persona::Persona(){
}

Persona::Persona(string nombre, int id, string email, int rol){
    this->nombre = nombre;
    this->id = id;
    this->email = email;
    this->rol = rol;
}

int Persona::getId(){
    return this->id;
}

