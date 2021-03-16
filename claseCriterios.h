#ifndef CLASECRITERIOS_H
#define CLASECRITERIOS_H
#endif
#include <iostream>

class Criterios{
    private:
        int cantidadCriterios;
        int idCriterio;
        string nombreCriterio;
        float ponderadoCriterios;
    public:
        Criterios();
        Criterios(int cantidadCriterios, string nombreCriterio, int idCriterio, float ponderadoCriterios);
        void crearListaDeCriterios();
};