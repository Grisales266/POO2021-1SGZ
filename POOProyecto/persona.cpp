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
    string rolTemporal;
    cout << "|===============================| \n";
    cout << " Nombre: " << this->nombre << endl;
    cout << " Id: " << this->id << endl;
    cout << " email: " << this->email << endl;
    if(this->rol == 1){
        rolTemporal = "Director";
    }
    else if(this->rol == 2){
        rolTemporal = "Codirector";
    }
    else if(this->rol == 3){
        rolTemporal = "Jurado";
    }
    else if(this->rol == 4){
        rolTemporal = "Estudiante";
    }
    cout << " rol: " << rolTemporal << endl;
}

string Persona::getNombrePersona(){
    return this->nombre;
}

int Persona::getrol(){
    return this->rol;
}

/*void Persona::diligenciarCalificacionesJurado1(){
    int idActaTemporal;
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
 */
//TODO a reoparar