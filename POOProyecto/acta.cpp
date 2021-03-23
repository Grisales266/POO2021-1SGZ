#include "acta.h"

Acta::Acta(){
}

Acta::Acta(string fecha, int numeroId, Persona autor, string nombreTrabajo, TipoDeTrabajo tipoDeTrabajo, Persona director, Persona codirector, Persona jurado1, Persona jurado2, int cantidadCriterios){
    this->fecha = fecha;
    this->numeroId = numeroId;
    this->autor = autor;
    this->nombreTrabajo = nombreTrabajo;
    this->tipoDeTrabajo = tipoDeTrabajo;
    this->director = director;
    this->codirector = codirector;
    this->jurado1 = jurado1;
    this->jurado2 = jurado2;
    this->cantidadCriterios = cantidadCriterios;
    this->estadoActa = abierto;
    this->estadoCalificacion = pendiente;
}
//Metodo que nos permite imprimir una acta en pantalla importando los datos necesarios
void Acta::mostrarActa(){
    cout << "==================" << endl;
    cout << "Fecha: " << this->fecha << endl;
    cout << "Id acta: " << this->numeroId << endl;
    cout << "Autor: ";
    cout << autor.getNombrePersona() << endl;
    cout << "Nombre de trabajo: " << this->nombreTrabajo << endl;
    if(this->tipoDeTrabajo == 1)
    {
        cout << "Tipo de trabajo: Industrial"<< endl;
    }
    else
    {
        cout << "Tipo de trabajo: Investigacion" << endl;
    }
    if(this->estadoActa == 1)
    {
        cout << "Estado de acta: Abierto"<< endl;
    }
    else if(this->estadoActa == 2)
    {
        cout << "Estado de acta: Cerrado"<< endl;
    }
    if(this->estadoCalificacion == 1)
    {
        cout << "Estado de calificacion: Aprobado"<< endl;
    }
    else if(this->estadoCalificacion == 2){
        cout << "Estado de calificacion: Rechazado"<< endl;
    }
    else{
        cout << "Estado de calificacion: Pendiente"<< endl;
    }
    cout << "Director: ";
    cout << director.getNombrePersona() << endl;
    cout << "Codirector: ";
    cout << codirector.getNombrePersona() << endl;                
    cout << "Jurado 1: ";
    cout << jurado1.getNombrePersona() << endl;
    cout << "Jurado 2: ";
    cout << jurado2.getNombrePersona() << endl;
}

//Metodo que nos permite obtener el rol de la persona
int Acta::getRolDirector()
{
    return this->director.getRolPersona();
}

//Metodo que nos permite conocer el id del director de un trabajo
int Acta::getIdDirector()
{
    return this->director.getId();
}

//Metodo que nos permite obtener el id del jurado 1
int Acta::getIdJurado1()
{
    return this->jurado1.getId();
}

//Metodo que nos permite obtener el id del jurado 2
int Acta::getIdJurado2()
{
    return this->jurado2.getId();
}

//Metodo que nos permite obtener el rol de jurado 1 para utilizarlo en comprobaciones
int Acta::getRolJurado1()
{
    return this->jurado1.getRolPersona();
}

//Metodo que nos permite obtener el rol de jurado 2 para utilizarlo en comprobaciones
int Acta::getRolJurado2()
{
    return this->jurado2.getRolPersona();
}

//Metodo que nos permite obtener el metodo el id de un acta para usarse en comprobaciones y ciclos
int Acta::getIdActa()
{
    return this->numeroId;
}

TipoDeTrabajo Acta::getTipoDeTrabajo()
{
    return this->tipoDeTrabajo;
}

//Metodo que nos permite llenar la tabla de criterios de DetalleActa
void Acta::crearCriterios()
{
    int x;
    float ponderadoU, notaJurado1, notaJurado2, notaPonderada, notaPromedio;
    string criterioU, comentarioJurado;
    for(x = 1; x <= this->cantidadCriterios; x++){
        cout << "Cual es la descripcion del criterio " << x << " : ";
        cin.ignore();
        getline(cin, criterioU);
        cout << "Cual es el ponderado de este criterio " << x << " ?: ";
        cin >> ponderadoU;
        Criterio criterioTemporal(criterioU, x, ponderadoU);
        cout << "Cual es el la nota del jurado 1 para el criterio " << x << ": ";
        cin >> notaJurado1;
        cout << "Cual es el la nota del jurado 2 para el criterio " << x << ": ";
        cin >> notaJurado2;
        cout << "Cual es el comentario de los jurados para el criterio " << x << ": ";
        cin.ignore();
        getline(cin, comentarioJurado);
        notaPonderada = (((notaJurado1 + notaJurado2) / 2) * (ponderadoU/100));
        notaPromedio = ((notaJurado1 + notaJurado2) / 2);
        this->listaDetallesActa.push_back(DetalleActa(criterioTemporal, notaJurado1, notaJurado2, comentarioJurado, notaPonderada, notaPromedio));
    }
}

//Metodo que nos permite acceder al valor contenido en el atributo estadoActa  de acta.h
EstadoActa Acta::getEstadoActa()
{
    return this->estadoActa;
}
//Metodo que permite mostrar en pantalla
void Acta::mostrarDetallesDeActa()
{
    for(list<DetalleActa>::iterator itActas = listaDetallesActa.begin(); itActas != listaDetallesActa.end(); itActas++)
        {
            itActas->mostrarDetallesDeActa();
        }
}
//Este metodo recoge la lista de notas de detalleActa y las recorre para poder sumarlas todas y obtener una nota final usando un algoritmo
void Acta::metodoCalcularNotaFinal()
{
        float notaPonderadaAcumulada = 0;
        for (list<DetalleActa>::iterator it = listaDetallesActa.begin(); it != listaDetallesActa.end(); it++)
        {
            notaPonderadaAcumulada += it->getNotaPonderada();
        }
        this->notaFinal = notaPonderadaAcumulada;
        if(notaPonderadaAcumulada < 3.5){
            this->estadoCalificacion = rechazado;
        }
        else if(notaPonderadaAcumulada >= 3.5){
            this->estadoCalificacion = aprobado;
        }
    cout << "La nota final es: " << notaPonderadaAcumulada << endl;
}

//Metodo que nos permite acceder al valor de nota final para usarlo en comprobaciones
float Acta::getNotaFinal()
{
    return this->notaFinal;
}

//Metodo para imprimir en pantalla los datos de Jurado 1
void Acta::mostrarJurado1()
{
    jurado1.mostrarPersona();
}

//Metodo para imprimir en pantalla los datos de Jurado 1
void Acta::mostrarJurado2()
{
    jurado2.mostrarPersona();
}

//Metodo que nos permite cambiar el estado acta a cerrado
void Acta::cambiarEstadoActa()
{
    this->estadoActa = cerrado;
}

//Metodo que nos permite acceder al estado de la calificacion:pendiente, aprrobado,rechazado
EstadoCalificacion Acta::getEstadoCalificacion()
{
    return this->estadoCalificacion;
}

//Metodo que crea un archivo .txt con los detalles de acta y criterios
void Acta::metodoCrearTxt()
{
    ofstream archivo;
    string nombreArchivo = this->nombreTrabajo;
    nombreArchivo += ".txt";
    archivo.open(nombreArchivo.c_str(), ios::out);
    if(archivo.fail())
    {
        cout << "Fallo al abrir el archivo.\n";
        exit(1);
    }
    else
    {
        archivo << "==================" << endl;
        archivo << "Fecha: " << this->fecha << endl;
        archivo << "Acta: " << this->numeroId << endl;
        archivo << "Autor: ";
        archivo << autor.getNombrePersona() << endl;
        archivo << "Nombre de trabajo: " << this->nombreTrabajo << endl;
        if(this->tipoDeTrabajo == 1)
        {
            archivo << "Tipo de trabajo: Industrial"<< endl;
        }
        else
        {
            archivo << "Tipo de trabajo: Investigacion" << endl;
        }
        archivo << "Jurado 1: ";
        archivo << jurado1.getNombrePersona() << endl;
        archivo << "Jurado 2: ";
        archivo << jurado2.getNombrePersona() << endl;
    }
    archivo.close();
    for (list<DetalleActa>::iterator it = listaDetallesActa.begin(); it != listaDetallesActa.end(); it++)
    {
        it->detallesActaParaTxt(nombreArchivo);
    }
}


