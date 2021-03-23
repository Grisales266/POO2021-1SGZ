#include "persona.h"
//constructor por defecto
Persona::Persona(){
}
//Constructor por parametros
Persona::Persona(string nombre, int id, string email, int rol, string tipoJurado){
    this->nombre = nombre;
    this->id = id;
    this->email = email;
    this->rol = rol;
    this->tipoJurado = tipoJurado;
}

//Metodo que nos permite acceder al id de una persona y utilizarlo en comprobaciones
int Persona::getId(){
    return this->id;
}
//Metodo que muestra la informacion de una persona en pantalla
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
        cout << " rol: " << rolTemporal << " de tipo " << this->tipoJurado << endl;
    }
    else if(this->rol == 4){
        rolTemporal = "Estudiante";
        cout << " rol: " << rolTemporal << endl;
    }
}
//Metodo que nos permite acceder al nombre de una persona
string Persona::getNombrePersona(){
    return this->nombre;
}

//Metodo que nos permite obtener el rol de una persona para ser usado en comprobaciones
int Persona::getRolPersona()
{
    return this->rol;
}
//Metodo que nos permite acceder al tipo de un jurado: Interno,Externo. Para usarse en comprobaciones.
string Persona::getObtenerTipoInternoExternoJurado()
{
    return this->tipoJurado;
}
