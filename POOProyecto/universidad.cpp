#include "universidad.h"

Universidad::Universidad(){
}

Universidad::Universidad(list<Persona> listaDePersonas, list<Acta> listaDeActas){
    this->listaDeActas = listaDeActas;
    this->listaDePersonas = listaDePersonas;
}

void Universidad::crearActa()
{   
    TipoDeTrabajo tipoDeTrabajo;
    int existenciaCodirector, idActa, idAutor, idDirector, idCodirector, idJurado1, idJurado2, tipoDeTrabajoU, respuesta, cantidadCriterios;
    string fechaU, nombreTrabajoU;
    Persona autorTemporal, directorTemporal, codirectorTemporal, jurado1Temporal, jurado2Temporal;
    fechaU = obtenerFechaSistema();
    cout << "Fecha: " << fechaU << endl;
    cout << "Ingrese el numero id de acta: ";
    cin >> idActa;
    if(comprobarExistenciaActa(idActa) == 1){
        cout << "El acta ya existe.\n";
        return ;
    }
    cout << "Ingrese el id del autor: ";
    cin >> idAutor;
    autorTemporal = buscarPersona(idAutor);
    cout << "Ingrese el nombre del trabajo: ";
    cin.ignore();
    getline(cin, nombreTrabajoU);
    cout << "1.Industria.\n2.Investigacion.\nCual es el tipo de trabajo?: ";
    cin >> tipoDeTrabajoU;
    if(tipoDeTrabajoU == 1){
        tipoDeTrabajo = industrial;
    }
    else{
        tipoDeTrabajo = investigacion;
    }
    cout << "1.Si.\n2.No.\nUsara la cantidad de criterios por defecto : ";
    cin >> respuesta;
    if(respuesta == 1){
        cantidadCriterios = 8;
    }
    else{
        cout << "Cuantos criterios tendra el acta: ";
        cin >> cantidadCriterios;
    }
    cout << "Ingrese el id del director: ";
    cin >> idDirector;
    directorTemporal = buscarPersona(idDirector);
    cout << "1.Si.\n2.No.\nExiste el codirector?: ";
    cin >> existenciaCodirector;
    if(existenciaCodirector == 1){
        cout << "Ingrese el id del codirector: ";
        cin >> idCodirector;
        codirectorTemporal = buscarPersona(idCodirector);
    }
    else{
        idCodirector = 123456;
        codirectorTemporal = buscarPersona(idCodirector);
    }
    cout << "Ingrese el id del jurado 1: ";
    cin >> idJurado1;
    jurado1Temporal = buscarPersona(idJurado1);
    cout << "Ingrese el id del jurado 2: ";
    cin >> idJurado2;
    jurado2Temporal = buscarPersona(idJurado2);
    this->listaDeActas.push_back(Acta(fechaU, idActa, autorTemporal, nombreTrabajoU, tipoDeTrabajo, directorTemporal, codirectorTemporal, jurado1Temporal, jurado2Temporal, cantidadCriterios));
    cout << "\n==============================\n";
    cout << "Acta de grado creada con exito.\n";
    cout << "==============================\n";
}

void Universidad::crearPersona()
{
    string nombreU, emailU;
    int idU, rolU;
    cout << "Ingrese el nombre de la persona: ";
    cin.ignore();
    getline(cin, nombreU);
    cout << "Ingrese el numero id de la persona: ";
    cin >> idU;
    if(comprobarExistenciaPersona(idU) == 1){
        cout << "La persona ya existe.\n";
        return ;
    }
    cout << "Ingrese el email de la persona: ";
    cin.ignore();
    getline(cin, emailU);
    cout << "1.Director.\n2.Codirector.\n3.Jurado.\n4.Estudiante.\nCual es el rol de esta persona?: ";
    cin >> rolU;
    this->listaDePersonas.push_back(Persona(nombreU, idU, emailU, rolU));
    cout << "\n==============================\n";
    cout << "Persona creada con exito.\n";
    cout << "==============================\n";
}

int Universidad::comprobarExistenciaPersona(int id)
{
    for(list<Persona>::iterator it = listaDePersonas.begin(); it != listaDePersonas.end(); it++)
    {
        if(it->getId() == id)
        {
            return 1;
        }
    }
    return 0;
}

int Universidad::comprobarExistenciaActa(int idActa)
{
    for(list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        if(it->getIdActa() == idActa)
        {
            return 1;
        }
    }
    return 0;
}

Persona Universidad::buscarPersona(int id)
{
    for(list<Persona>::iterator it = listaDePersonas.begin(); it != listaDePersonas.end(); it++)
    {
        if(it->getId() == id)
        {
            return *it;
        }
    }
}

Acta Universidad::buscarActa(int idActa)
{
    for(list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        if(it->getIdActa() == idActa)
        {
            return *it;
        }
    }
}

void Universidad::mostrarTodosPersona()
{
    for (list<Persona>::iterator it = listaDePersonas.begin(); it != listaDePersonas.end(); it++)
    {
        it->mostrarPersona();
    }
}

void Universidad::mostrarTodasActa()
{
    for (list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        it->mostrarActa();
    }
}

void Universidad::consultarTipoDeTrabajo()//Funcion que encuentra si el trabajo es de tipo Industria o Investigacion
{
    int acumuladorTrabajosDeTipoA = 0, acumuladorTrabajosDeTipoB = 0;
    cout<<"Id's actas trabajo de tipo Industria: "<<endl;
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end();itActas++)//Para hallar de tipo A
        if(itActas->getTipoDeTrabajo() == industrial )//TODO Asignar condicion de busqueda
        {
            cout<< itActas->getIdActa()<<endl;
            acumuladorTrabajosDeTipoA += 1;
        }

    cout<<"Id's actas trabajo de tipo Investigacion: "<<endl;
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end();itActas++)//Para hallar de tipo B
        if(itActas->getTipoDeTrabajo() == investigacion )//TODO Asignar condicion de busqueda
        {
            cout<< itActas->getIdActa()<<endl;
            acumuladorTrabajosDeTipoB += 1;
        }
    cout << "\n=========================\n";
    cout << "Existen "<<acumuladorTrabajosDeTipoA<<" trabajos de tipo Industria"<<endl;
    cout << "Existen "<<acumuladorTrabajosDeTipoB<<" trabajos de tipo Investigacion"<<endl;
    cout << "=========================\n";

}

void Universidad::crearCriterio(){
    string criterioU;
    int ponderadoU, idTemporal;
    cout << "Digite el id del acta donde pondra los criterios";
    cin >> idTemporal;
    if(comprobarExistenciaActa(idTemporal) != 1){
        cout << "\n=========================\n";
        cout << "El acta no existe.\n";
        cout << "=========================\n";
        return ;
    }
    for (list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        if(it->getIdActa() == idTemporal){
            it->crearCriterios();
        }
    }
    cout << "\n==============================\n";
    cout << "Criterios creados con exito.\n";
    cout << "==============================\n";
}

string Universidad::obtenerFechaSistema()
{
    time_t      now = time(0);
    struct tm tstruct;
    char        buf[80];
    tstruct = *localtime(&now);
    strftime(buf,sizeof(buf),"%d-%m-%y",&tstruct);
    return buf;//Devuelve la fecha de sistema en formato "AA-MM-DD"

}

void Universidad::consultarTrabajosDeUnDirector()
{
    int idProfesorBuscado;
    cout << "Ingrese el ID del profesor consultado";
    cin >> idProfesorBuscado;
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end(); itActas++)
    {
        if(itActas->getIdDirector() == idProfesorBuscado && itActas->getRolDirector() == 1)
        {
            cout<<itActas->getIdActa()<<endl;
        }
    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}

void Universidad::consultarTrabajosDeUnJurado()
{
    int idJuradoBuscado;
    cout << "Ingrese el ID del jurado consultado: "<<endl;
    cin >> idJuradoBuscado;
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end();itActas++)
    {
        if(itActas->getIdJurado1() == idJuradoBuscado || itActas->getIdJurado2() == idJuradoBuscado && itActas->getRolJurado1() == 3 ||  itActas->getRolJurado2() == 3  )
        {
            cout<<itActas->getIdActa()<<endl;
        }
    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}
int Universidad::comprobarSiElementoEnUnaLista(list<int> lista, int valorAComprobar)
{
    for(list<int>::iterator itRecorredorDeLista = lista.begin(); itRecorredorDeLista != lista.end();itRecorredorDeLista++)
    {
        if(*itRecorredorDeLista == valorAComprobar)
        {
            return 0;

        }

    }
    return 1;
}
void Universidad::consultarListaJuradosDeActasRegistradas()
{

    list<int> listaIdJurados;
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end(); itActas++)
    {
        if(itActas->getRolJurado1() == 3 || itActas->getRolJurado2() == 3)
        {

            if(comprobarSiElementoEnUnaLista(listaIdJurados,itActas->getIdJurado1()))
            {
                listaIdJurados.push_back(itActas->getIdJurado1());
                itActas->mostrarJurado1(); //TODO  creal el metodo
            }

            if(comprobarSiElementoEnUnaLista(listaIdJurados,itActas->getIdJurado2()))
            {
                listaIdJurados.push_back(itActas->getIdJurado2());
                itActas->mostrarJurado2();
            }
        }




    /*for(list<int>::iterator itIdJurados = listaIdJurados.begin(); itIdJurados != listaIdJurados.end()--; itIdJurados++)
    {
        if(*itIdJurados != *itIdJurados++)
        {
            listaIdJuradosSinRepetidos.push_back(itIdJurados->);
            //Obtendria una lista sin repetidos de los ids jurados que han participado en actas

        }
        i++;
    }*/


    /*for(list<Persona>::iterator itPersonas = listaDePersonas.begin(); itPersonas != listaDePersonas.end();itPersonas++)
    {
        if(itPersonas->getRolPersona() == 3 )
        {
            itPersonas->mostrarPersona();
            cout<<"------------------------------------------------"<<endl;
        }
    }*/
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}

void Universidad::mostrarTodasDetalleActa()
{
    int idActa;
    cout << "Ingrese el Id del acta que quiere saber los criterios: \n";
    cin >> idActa;
    if(comprobarExistenciaActa(idActa) != 1)
            {
                cout << "El acta no existe.\n";
                return ;
            }
    for (list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        if(it->getIdActa() == idActa){
            it->mostrarDetallesDeActa();
        }
    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}
void Universidad::consultarActasPendienteORechazadas()
{
    int tipoDeActa;
    cout << "Ingrese el tipo de acta que busca: \n1.Pendiente \n2.Rechazada\n------------>: " << endl;
    cin >> tipoDeActa;
    switch (tipoDeActa)
    {
        case 1:
            cout<<"Rechazadas";
            for (list<Acta>::iterator itActa = listaDeActas.begin(); itActa != listaDeActas.end(); itActa++)
            {
                if (itActa->getNotaFinal() <= 1 ) //getNotaFinal debe ser de tipo float
                {
                    itActa->mostrarActa();
                }
            }
            //TODO revisar asignacion del tipo de valor que retorna la funciona getNotaFinal

        case 2:
            cout<<"ActasPendientes";
            for (list<Acta>::iterator itActa = listaDeActas.begin(); itActa != listaDeActas.end(); itActa++)
            {
                if (itActa->getNotaFinal() <=  3 ) //getNotaFinal debe ser de tipo float
                {
                    itActa->mostrarActa();
                }
            }

    }
}

void Universidad::mostrarJuradosInternosOExtenos()
{
    int tipoDeJuradoBuscado;
    cout << "Ingrese el tipo de jurado que busca: \n1.Interno\n2.Externo\n------------>: " << endl;
    cin >> tipoDeJuradoBuscado;
    switch (tipoDeJuradoBuscado)
    {
        case 1:
            cout<<"Jurados Internos";
            for (list<Persona>::iterator itPersonas = listaDePersonas.begin(); itPersonas != listaDePersonas.end(); itPersonas++)
            {
                if (itPersonas->getRolPersona() == 3 && itPersonas->getObtenerTipoInternoExternoJurado == 1)
                {
                    itPersonas->mostrarPersona();
                }
            }
            //TODO reasignar valor con el cual se define externo y externo
        case 2:
            cout<<"Jurados Externos";
            for (list<Persona>::iterator itPersonas = listaDePersonas.begin(); itPersonas != listaDePersonas.end(); itPersonas++)
            {
                if (itPersonas->getRolPersona() == 3 && itPersonas->getObtenerTipoInternoExternoJurado == 2)
                {
                    itPersonas->mostrarPersona();
                }
            }
    }
}
