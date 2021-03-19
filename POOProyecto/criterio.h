#ifndef CLASECRITERIOS_H
#define CLASECRITERIOS_H
#include <iostream>
using namespace std;

class Criterio{
    private:
        int cantidadCriterios;
        int idCriterio;
        string nombreCriterio;
        float ponderadoCriterios;
    public:
        Criterio();
        Criterio(int, string , int , float);
        void crearListaDeCriterios();
};

#endif
