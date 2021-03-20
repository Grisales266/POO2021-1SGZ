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

string Persona::getNombrePersona(){
    return this->nombre;
}

void Persona::diligenciarCalificacionesJurado1(){
    cout << "Ingrese el id del acta a calificar: ";
    cin >> idActaTemporal;
    if(comprobarExistenciaActa(idActaTemporal) != 1){
        cout << "El acta no existe, por favor creela.\n";
        return;
    }
    if(this->rol == 3){
        cout << "Digite su nota como jurado 1: ";
        cin >> notaJurado1;
    }

}