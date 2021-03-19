#ifndef DETALLEACTA_H
#define DETALLEACTA_H
#include "criterio.h"
#include <iostream>
using namespace std;

class DetalleActa{
    private:
        Criterio criterio;
        float notaJurado1;
        float notaJurado2;
        string comentarioJurado;
        float notaPonderada;
        float notaPromedio;
    public:
        DetalleActa();
        DetalleActa(Criterio, float, float, string, float, float);
};

#endif