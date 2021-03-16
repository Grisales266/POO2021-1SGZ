#ifndef CLASEJURADO_H
#define CLASEJURADO_H
#endif

enum pertenenciaALaUni{
    interna = 1, externa
};


class Jurado{
    private:
        string nombre;
        int id;
        enum pertenenciaALaUni;
    public:
        Jurado();
        Jurado(string, int, enum);
        void diligenciarCalficaciones();
        void diligenciarComentarios();
};