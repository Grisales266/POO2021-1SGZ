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
    public:
        Persona();
        Persona(string, int, string, int);
        int getId();
};

#endif
