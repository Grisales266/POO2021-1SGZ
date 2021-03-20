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

void Persona::mostrarPersona(){
    cout << "|===============================| \n";
    cout << " Nombre: " << this->nombre << endl;
    cout << " Id: " << this->id << endl;
    cout << " email: " << this->email << endl;
    cout << " rol: " << this->rol << endl;
}