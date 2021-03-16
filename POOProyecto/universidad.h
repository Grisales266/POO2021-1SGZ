#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#endif

class Universidad{
    private:
        list<Persona> listaDePersonas;
        list<Acta> listaDeActas;
    public:
        Universidad();
        Universidad(list<Persona>, list<Acta>);
        void crearListaActasDeGrado();
        void crearListaDePersonas();

};