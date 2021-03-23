#ifndef CLASEPERSONA_H
#define CLASEPERSONA_H
#include <iostream>
using namespace std;

class Persona{
    private:
        string nombre;
        int id;
        string email;
        int rol;
        string tipoJurado;
    public:
        Persona();
        Persona(string, int, string, int, string);
        int getId();
        string getNombrePersona();
        int getRolPersona();
        void mostrarPersona();
        string getObtenerTipoInternoExternoJurado();
};

#endif
