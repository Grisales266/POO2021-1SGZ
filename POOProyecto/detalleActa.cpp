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