#ifndef MODUSCALIFICADOR_H
#define MODUSCALIFICADOR_H
#endif

class ModusCalificador{
    private:
        list<Criterios> listaDeCriterios;
    public:
        ModusCalificador();
        ModusCalificador(list<Criterios>);
        void calcularNotaFinal();
};