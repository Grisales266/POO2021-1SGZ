#include "universidad.h"

Universidad::Universidad(){
}

Universidad::Universidad(list<Persona> listaDePersonas, list<Acta> listaDeActas){
    this->listaDeActas = listaDeActas;
    this->listaDePersonas = listaDePersonas;
}

void Universidad::crearActa()
{
    TipoDeTrabajo tipoDeTrabajo;
    int existenciaCodirector, idActa, idAutor, idDirector, idCodirector, idJurado1, idJurado2, tipoDeTrabajoU;
    string fechaU, nombreTrabajoU;
    Persona autorTemporal, directorTemporal, codirectorTemporal, jurado1Temporal, jurado2Temporal;
    cout << "Ingrese la fecha del acta de grado: ";
    cin >> fechaU;
    cout << "Ingrese el numero id de acta: ";
    cin >> idActa;
    if(comprobarExistenciaActa(idActa) == 1){
        cout << "El acta ya existe.\n";
        return ;
    }
    cout << "Ingrese el id del autor: ";
    cin >> idAutor;
    autorTemporal = buscarPersona(idAutor);
    cout << "Ingrese el nombre del trabajo: ";
    cin >> nombreTrabajoU;
    cout << "1.Industria.\n2.Investigacion.\nCual es el tipo de trabajo?: ";
    cin >> tipoDeTrabajoU;
    if(tipoDeTrabajoU == 1){
        tipoDeTrabajo = industrial;
    }
    else{
        tipoDeTrabajo = investigacion;
    }
    cout << "Ingrese el id del director: ";
    cin >> idDirector;
    directorTemporal = buscarPersona(idDirector);
    cout << "1.Si.\n2.No.\nExiste el codirector?: ";
    cin >> existenciaCodirector;
    if(existenciaCodirector == 1){
        cout << "Ingrese el id del codirector: ";
        cin >> idCodirector;
        codirectorTemporal = buscarPersona(idCodirector);
    }
    else{
        idCodirector = 123456;
        codirectorTemporal = buscarPersona(idCodirector);
    }
    cout << "Ingrese el id del jurado 1: ";
    cin >> idJurado1;
    jurado1Temporal = buscarPersona(idJurado1);
    cout << "Ingrese el id del jurado 2: ";
    cin >> idJurado2;
    jurado2Temporal = buscarPersona(idJurado2);
    this->listaDeActas.push_back(Acta(fechaU, idActa, autorTemporal, nombreTrabajoU, tipoDeTrabajo, directorTemporal, codirectorTemporal, jurado1Temporal, jurado2Temporal));
    cout << "Acta de grado creada con exito.\n";
}

void Universidad::crearPersona()
{
    string nombreU, emailU;
    int idU, rolU;
    cout << "Ingrese el nombre de la persona: ";
    cin.ignore();
    getline(cin, nombreU);
    cout << "Ingrese el numero id de la persona: ";
    cin >> idU;
    if(comprobarExistenciaPersona(idU) == 1){
        cout << "La persona ya existe.\n";
        return ;
    }
    cout << "Ingrese el email de la persona: ";
    cin.ignore();
    getline(cin, emailU);
    cout << "1.Director.\n2.Codirector.\n3.Jurado 1.\n4.Jurado 2.\nCual es el rol de esta persona?: ";
    cin >> rolU;
    this->listaDePersonas.push_back(Persona(nombreU, idU, emailU, rolU));
    cout << "Persona creada con exito.\n";
}

int Universidad::comprobarExistenciaPersona(int id)
{
    for(list<Persona>::iterator it = listaDePersonas.begin(); it != listaDePersonas.end(); it++)
    {
        if(it->getId() == id)
        {
            return 1;
        }
    }
    return 0;
}

int Universidad::comprobarExistenciaActa(int idActa)
{
    for(list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        if(it->getIdActa() == idActa)
        {
            return 1;
        }
    }
    return 0;
}

Persona Universidad::buscarPersona(int id)
{
    for(list<Persona>::iterator it = listaDePersonas.begin(); it != listaDePersonas.end(); it++)
    {
        if(it->getId() == id)
        {
            return *it;
        }
    }
}

Acta Universidad::buscarActa(int idActa)
{
    for(list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        if(it->getIdActa() == idActa)
        {
            return *it;
        }
    }
}

void Universidad::mostrarTodosPersona()
{
    for (list<Persona>::iterator it = listaDePersonas.begin(); it != listaDePersonas.end(); it++)
    {
        it->mostrarPersona();
    }
}

void Universidad::mostrarTodasActa()
{
    for (list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        it->mostrarActa();
    }
}

void Universidad::introducirCalificaciones()
{

}