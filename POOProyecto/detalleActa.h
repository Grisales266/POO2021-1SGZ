 #ifndef DETALLEACTA_H
#define DETALLEACTA_H
#include <fstream>
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
        void mostrarDetallesDeActa();
        float getNotaPonderada();
        void detallesActaParaTxt(string);
};

#endif