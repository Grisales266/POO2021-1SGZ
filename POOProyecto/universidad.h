#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

class Universidad{
    private:
        list<Persona> listaDePersonas;
        list<Acta> listaDeActas;
    public:
        Universidad();
        Universidad(list<Persona>, list<Acta>);
        void crearActa();
        void crearPersona();
        void crearListaActasDeGrado();
        void crearListaDePersonas();
};

#endif
