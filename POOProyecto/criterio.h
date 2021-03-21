#ifndef CLASECRITERIOS_H
#define CLASECRITERIOS_H
#include <iostream>
using namespace std;

class Criterio{
    private:
        int numeroCriterio;
        string nombreCriterio;
        float ponderadoCriterios;
    public:
        Criterio();
        Criterio(string, int, float);
};

#endif
