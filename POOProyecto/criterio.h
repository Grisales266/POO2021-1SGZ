#ifndef CLASECRITERIOS_H
#define CLASECRITERIOS_H
#include <iostream>
#include <fstream>
using namespace std;

class Criterio{
    private:
        int numeroCriterio;
        string nombreCriterio;
        float ponderadoCriterio;
    public:
        Criterio();
        Criterio(string, int, float);
        void mostrarCriterio();
        void mostrarCriterioTxt();
        int getNumeroCriterio();
        string getNombreCriterio();
        float getPonderadoCriterio();
};

#endif
