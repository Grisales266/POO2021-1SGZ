#include "detalleActa.h"

/*Constructor por defecto*/
DetalleActa::DetalleActa(){
}

/*Constructor por parámetros*/
DetalleActa::DetalleActa(Criterio criterio, float notaJurado1, float notaJurado2, string comentarioJurado, float notaPonderada, float notaPromedio){
    this->criterio = criterio;
    this->notaJurado1 = notaJurado1;
    this->notaJurado2 = notaJurado2;
    this->comentarioJurado = comentarioJurado;
    this->notaPonderada = notaPonderada;
    this->notaPromedio = notaPromedio;
}

/*Método para organizar la información del detalle acta que será impresa más adelante*/
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

/*Método para obtener la nota ponderada calculada de las notas de los jurados*/
float DetalleActa::getNotaPonderada(){
    return this->notaPonderada;
}

/*Método para organizar la información del detalle acta que será mostrada en el archivo .txt*/
void DetalleActa::detallesActaParaTxt(string nombreArchivo)
{
    ofstream archivo;
    archivo.open(nombreArchivo.c_str(), ios::app);
    archivo << this->criterio.getNumeroCriterio() << ".";
    archivo << this->criterio.getNombreCriterio() << endl;
    archivo << "Nota parcial: " << this->notaPromedio << "                                                  ";
    archivo << this->criterio.getPonderadoCriterio() << "%" << endl;
    archivo << "Observaciones: " << this->comentarioJurado << endl;
    archivo.close();
}