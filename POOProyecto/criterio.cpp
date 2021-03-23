#include "criterio.h"

/*Constructor por defecto*/
Criterio::Criterio(){
}

/*Constructor por parámetros*/
Criterio::Criterio (string nombreCriterio, int idCriterio, float ponderadoCriterio){
    this->nombreCriterio = nombreCriterio;
    this->numeroCriterio = idCriterio;
    this->ponderadoCriterio = ponderadoCriterio;
}

/*Método para organizar la forma en que será mostrada la información del criterio en mostrarTodasDetalleActa*/
void Criterio::mostrarCriterio(){
    cout << "Numero de criterio: " << this->numeroCriterio << endl;
    cout << "Descripcion de criterio " << this->numeroCriterio <<  ": " << this->nombreCriterio << endl;
    cout << "Ponderado de criterio " << this->numeroCriterio <<  ": "  << this->ponderadoCriterio << "%" << endl;
}

/*Método para organizar la información en que será mostrado la información de los criterios en el archivo .txt*/
void Criterio::mostrarCriterioTxt(){
    ofstream archivo;
    archivo << "Numero de criterio: " << this->numeroCriterio << endl;
    archivo << "Descripcion de criterio " << this->numeroCriterio <<  ": " << this->nombreCriterio << endl;
    archivo << "Ponderado de criterio " << this->numeroCriterio <<  ": "  << this->ponderadoCriterio << "%" << endl;
}

int Criterio::getNumeroCriterio()
{
    return this->numeroCriterio;
}

string Criterio::getNombreCriterio()
{
    return this->nombreCriterio;
}

float Criterio::getPonderadoCriterio()
{
    return this->ponderadoCriterio;
}