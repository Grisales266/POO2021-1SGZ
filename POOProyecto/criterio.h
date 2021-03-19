#ifndef CLASECRITERIOS_H
#define CLASECRITERIOS_H
#include <iostream>

class Criterio{
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

#endif
