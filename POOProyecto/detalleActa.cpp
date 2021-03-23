#include "detalleActa.h"

DetalleActa::DetalleActa(){
}

DetalleActa::DetalleActa(Criterio criterio, float notaJurado1, float notaJurado2, string comentarioJurado, float notaPonderada, float notaPromedio){
    this->criterio = criterio;
    this->notaJurado1 = notaJurado1;
    this->notaJurado2 = notaJurado2;
    this->comentarioJurado = comentarioJurado;
    this->notaPonderada = notaPonderada;
    this->notaPromedio = notaPromedio;
}

void DetalleActa::mostrarDetallesDeActa(){
    cout << "|===============================| \n";
    cout << " Criterios: " << endl;
    this->criterio.mostrarCriterio();
    cout << "Nota jurado 1: " << this->notaJurado1 << endl;
    cout << "Nota jurado 2: " << this->notaJurado2 << endl;
    cout << "Comentarios de jurados: " << this->comentarioJurado << endl;
    cout << "Nota ponderado: " << this->notaPonderada << endl;
    cout << "Nota promedio: " << this->notaPromedio << endl;
}

float DetalleActa::getNotaPonderada(){
    return this->notaPonderada;
}

void DetalleActa::detallesActaParaTxt(string nombreArchivo)
{
    ofstream archivo;
    archivo.open(nombreArchivo.c_str(), ios::app);
    archivo << "|===============================| \n";
    archivo << " Criterios: " << endl;
    this->criterio.mostrarCriterioTxt();
    archivo << "Nota jurado 1: " << this->notaJurado1 << endl;
    archivo << "Nota jurado 2: " << this->notaJurado2 << endl;
    archivo << "Comentarios de jurados: " << this->comentarioJurado << endl;
    archivo << "Nota ponderado: " << this->notaPonderada << endl;
    archivo << "Nota promedio: " << this->notaPromedio << endl;
    archivo.close();
}