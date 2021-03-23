#include "persona.h"

Persona::Persona(){
}

Persona::Persona(string nombre, int id, string email, int rol, string tipoJurado){
    this->nombre = nombre;
    this->id = id;
    this->email = email;
    this->rol = rol;
    this->tipoJurado = tipoJurado;
}

int Persona::getId(){
    return this->id;
}

void Persona::mostrarPersona(){
    string rolTemporal;
    cout << "|===============================| \n";
    cout << " Nombre: " << this->nombre << endl;
    cout << " Id: " << this->id << endl;
    cout << " email: " << this->email << endl;
    if(this->rol == 1){
        rolTemporal = "Director";
        cout << " rol: " << rolTemporal << endl;
    }
    else if(this->rol == 2){
        rolTemporal = "Codirector";
        cout << " rol: " << rolTemporal << endl;
    }
    else if(this->rol == 3){
        rolTemporal = "Jurado";
        cout << " rol: " << rolTemporal << "de tipo " << this->tipoJurado << endl;
    }
    else if(this->rol == 4){
        rolTemporal = "Estudiante";
        cout << " rol: " << rolTemporal << endl;
    }
}

string Persona::getNombrePersona(){
    return this->nombre;
}

int Persona::getRolPersona()
{
    return this->rol;
}

string Persona::getObtenerTipoInternoExternoJurado()
{
    return this->tipoJurado;
}

/*int Persona::getObtenerTipoInternoExternoJurado()
{
    //TODO return this->InternoExterno
    //TODO crear atributo para persona que defina si es extero o interno
    return 0;
}*/
