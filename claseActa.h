#ifndef CLASEACTA_H
#define CLASEACTA_H
#endif
#include <iostream>

enum estadoActa{
    aprobado = 1, rechazado
};

enum tipoDeTrabajo{
    industrial = 1, investigacion
};

class Acta{
    private:
        int numeroId;
        string fecha;
        string nombreAutor;
        string nombreTrabajo;
        enum tipoDeTrabajo;
        int periodo;
        string nombreDirector;
        string nombreCodirector;
        string nombreJurado1;
        string nombreJurado2;
        enum estadoActa;
    public:
        Acta();
        Acta(string, int, string, string, enum, string, string, string, string, enum);
};



  