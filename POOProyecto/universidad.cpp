#include "universidad.h"
const int idInexistente = 99999;

/*Constructor por defecto*/
Universidad::Universidad(){
}

/*Constructor por parámetros*/
Universidad::Universidad(list<Persona> listaDePersonas, list<Acta> listaDeActas){
    this->listaDeActas = listaDeActas;
    this->listaDePersonas = listaDePersonas;
}

/*Método para crear el acta con cada uno de sus datos*/
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
    if(comprobarExistenciaActa(idActa) == 1){/*Comprobar existencias*/
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
    cout << "Existe el codirector?\n1.Si.\n2.No.\nRespuesta: ";
    cin >> existenciaCodirector;
    if(existenciaCodirector == 1){
        cout << "Ingrese el id del codirector: ";
        cin >> idCodirector;
        codirectorTemporal = buscarPersona(idCodirector);
    }
    else{
        idCodirector = idInexistente;
        cin >> idCodirector;
        codirectorTemporal = buscarPersona(idCodirector);
    }
    cout << "Ingrese el id del jurado 1: ";
    cin >> idJurado1;
    jurado1Temporal = buscarPersona(idJurado1);
    cout << "Ingrese el id del jurado 2: ";
    cin >> idJurado2;
    jurado2Temporal = buscarPersona(idJurado2);
    /*Se guardan los datos en una lista de actas*/
    this->listaDeActas.push_back(Acta(fechaU, idActa, autorTemporal, nombreTrabajoU, tipoDeTrabajo, directorTemporal, codirectorTemporal, jurado1Temporal, jurado2Temporal, cantidadCriterios));
    cout << "\n==============================\n";
    cout << "Acta de grado creada con exito.\n";
    cout << "==============================\n";
}

/*Método para crear personas que serán usadas en las actas y demás métodos*/
void Universidad::crearPersona()
{
    string nombreU, emailU, tipoJurado;
    int idU, rolU, opcion;
    cout << "Ingrese el nombre de la persona: ";
    cin.ignore();
    getline(cin, nombreU);
    cout << "Ingrese el numero id de la persona: ";
    cin >> idU;
    if(idU == idInexistente){
        setPersonasNulas();
    }
    else if(comprobarExistenciaPersona(idU) == 1){/*Comprobar existencias*/
        cout << "La persona ya existe.\n";
        return ;
    }
    cout << "Ingrese el email de la persona: ";
    cin.ignore();
    getline(cin, emailU);
    cout << "1.Director.\n2.Codirector.\n3.Jurado.\n4.Estudiante.\nCual es el rol de esta persona?: ";
    cin >> rolU;
    if(rolU == 3){
        cout << "El jurado es de tipo:\n1.Interno.\n2.Externo.\nOpcion: ";
        cin >> opcion;
        if(opcion == 1){
            tipoJurado = "Interno";
        }
        else{
            tipoJurado = "Externo";
        }
    }
    /*Se guardan los datos en una lista de personas que se utilizarán en otros métodos*/
    this->listaDePersonas.push_back(Persona(nombreU, idU, emailU, rolU, tipoJurado));
    cout << "\n==============================\n";
    cout << "Persona creada con exito.\n";
    cout << "==============================\n";
}

/*Método para comprobar la existencia de una persona recorriendo las listas de personas*/
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

/*Método para guardar una persona vacía (el codirector), donde se pregunta si existe o no*/
void Universidad::setPersonasNulas(){
    string nombreU, emailU, tipoJurado;
    int idU, rolU;
    nombreU = "No existe.";
    emailU = "Null";
    tipoJurado = "Null";
    idU = idInexistente;
    rolU = 0;
    this->listaDePersonas.push_back(Persona(nombreU, idU, emailU, rolU, tipoJurado));
}

/*Método para comprobar la existencia del acta*/
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

/*Método para buscar una persona por ESPECÍFICO mediante el uso del ID*/
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

/*Método para buscar un acta en ESPECÍFICO mediante el uso del id del acta*/
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

/*Método para mostrar todas las personas que han sido registradas en la lista de personas*/
void Universidad::mostrarTodosPersona()
{
    for (list<Persona>::iterator it = listaDePersonas.begin(); it != listaDePersonas.end(); it++)
    {
        it->mostrarPersona();
    }
}

/*Método para mostrar todas las actas que han sido registradas en la lista de actas*/
void Universidad::mostrarTodasActa()
{
    for (list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        it->mostrarActa();
    }
}

/*Método para consultar un tipo de trabajo que ha sido ingresado en el acta. (Investigació o industria)*/
void Universidad::consultarTipoDeTrabajo()//Funcion que encuentra si el trabajo es de tipo Industria o Investigacion
{
    int acumuladorTrabajosDeTipoA = 0, acumuladorTrabajosDeTipoB = 0;
    cout << "Id's actas trabajo de tipo Industria: ";
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end();itActas++)//Para hallar de tipo A
        if(itActas->getTipoDeTrabajo() == industrial )
        {
            cout << itActas->getIdActa() << " - ";
            acumuladorTrabajosDeTipoA += 1;
        }

    cout<<"\nId's actas trabajo de tipo Investigacion: ";
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end();itActas++)//Para hallar de tipo B
        if(itActas->getTipoDeTrabajo() == investigacion )
        {
            cout << itActas->getIdActa() << " - ";
            acumuladorTrabajosDeTipoB += 1;
        }
    cout << "\n=========================\n";
    cout << "Existen "<<acumuladorTrabajosDeTipoA<<" trabajos de tipo Industria."<<endl;
    cout << "Existen "<<acumuladorTrabajosDeTipoB<<" trabajos de tipo Investigacion."<<endl;
    cout << "=========================\n";

}

/*Método para crear los criterios y diligenciar calificaciones que será guardado en la lista de detalle acta*/
void Universidad::crearCriterio(){
    string criterioU;
    int ponderadoU, idTemporal;
    cout << "Digite el id del acta donde pondra los criterios: ";
    cin >> idTemporal;
    if(comprobarExistenciaActa(idTemporal) != 1){//Comprobar existencias
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

/*Método para obtener la fecha actual de forma automática */
string Universidad::obtenerFechaSistema()
{
    time_t      now = time(0);
    struct tm tstruct;
    char        buf[80];
    tstruct = *localtime(&now);
    strftime(buf,sizeof(buf),"%d-%m-%y",&tstruct);
    return buf;//Devuelve la fecha de sistema en formato "AA-MM-DD"

}

/*Método para hallar los ids de los trabajos que ha dirigido un director*/
void Universidad::consultarTrabajosDeUnDirector()
{
    int idProfesorBuscado;
    cout << "Ingrese el ID del director consultado: ";
    cin >> idProfesorBuscado;
    if(!comprobarExistenciaPersona(idProfesorBuscado) )
    {
        cout<<"La persona no existe"<<endl;
        return;
    }
    cout << "Ids de acta donde ha dirigido el director de id " << idProfesorBuscado << ": ";
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end(); itActas++)
    {
        if(itActas->getIdDirector() == idProfesorBuscado && itActas->getRolDirector() == 1)
        {
            cout<<itActas->getIdActa()<< " - ";
        }
    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}

/*Método para consultar los trabajos en los que ha participado un jurado (sin repetir)*/
void Universidad::consultarTrabajosDeUnJurado()
{
    int idJuradoBuscado;
    cout << "Ingrese el ID del jurado consultado: ";
    cin >> idJuradoBuscado;
    if(!comprobarExistenciaPersona(idJuradoBuscado) )//Comprobar existencias
    {
        cout<<"La persona no existe."<<endl;
        return;
    }
    cout << "El jurado de id " << idJuradoBuscado << " esta en las actas de id: "; 
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end();itActas++)
    {
        if(itActas->getIdJurado1() == idJuradoBuscado && itActas->getRolJurado1() == 3)
        {
            cout<<itActas->getIdActa()<<endl;
        }
        else if(itActas->getIdJurado2() == idJuradoBuscado && itActas->getRolJurado2() == 3)
        {
            cout<<itActas->getIdActa()<<endl;
        }
    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}

/*Método que recibe cualquier lista y valor para verificar que el valor existe en esa lista*/
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

/*Método que permite mostrar los jurados que han participado en las actas(sin repetir)*/
void Universidad::consultarListaJuradosDeActasRegistradas()
{
    list<int> listaIdJurados;// Esta lista va a guardar los ids de los jurados sin repetir
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end(); itActas++)
    {
        if(itActas->getRolJurado1() == 3 || itActas->getRolJurado2() == 3)
        {

            if(comprobarSiElementoEnUnaLista(listaIdJurados,itActas->getIdJurado1()))
            {
                listaIdJurados.push_back(itActas->getIdJurado1());
                itActas->mostrarJurado1();
            }

            if(comprobarSiElementoEnUnaLista(listaIdJurados,itActas->getIdJurado2()))
            {
                listaIdJurados.push_back(itActas->getIdJurado2());
                itActas->mostrarJurado2();
            }
        }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
    }
}

/*Método para mostrar los criterios con cada uno de sus detalles necesarios para mostrarse*/
void Universidad::mostrarTodasDetalleActa()
{
    int idActa;
    cout << "Ingrese el Id del acta que quiere saber los criterios: ";
    cin >> idActa;
    if(comprobarExistenciaActa(idActa) != 1)
            {
                cout << "\n==============================\n";
                cout << "El acta no existe.\n";
                cout << "==============================\n";
                return ;
            }
    for (list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        if(it->getIdActa() == idActa)
        {
            it->mostrarDetallesDeActa();
        }
    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}

/*Método que calcula la nota final teniendo en cuenta los criterios con cada uno de sus detalles de acta*/
void Universidad::calcularNotaFinal()
{
    int idActa;
    cout << "Ingrese el id del acta donde quiere conocer la nota final: ";
    cin >> idActa;
    if(comprobarExistenciaActa(idActa) != 1)
    {
        cout << "\n==============================\n";
        cout << "El acta no existe.\n";
        cout << "==============================\n";
        return ;
    }
    for (list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        if(it->getIdActa() == idActa)
        {
            it->metodoCalcularNotaFinal();
        }
    }
}

//Este metodo pregunta el tipo de estado de calificacion que desea consultar y muestra las actas que cumplen ese tipo
void Universidad::consultarActasPendienteORechazadas()
{
    int tipoDeActa;
    cout << "Ingrese el tipo de acta que busca: \n1.Pendiente \n2.Rechazada\nOpcion: ";
    cin >> tipoDeActa;
    switch (tipoDeActa)
    {
        case 1:
            cout<<"Actas rechazadas";
            for (list<Acta>::iterator itActa = listaDeActas.begin(); itActa != listaDeActas.end(); itActa++)
            {
                if (itActa->getNotaFinal() <= 3.5 ) //getNotaFinal debe ser de tipo float
                {
                    itActa->mostrarActa();
                }
            }

        case 2:
            cout<<"Actas pendientes";
            for (list<Acta>::iterator itActa = listaDeActas.begin(); itActa != listaDeActas.end(); itActa++)
            {
                if (itActa->getEstadoCalificacion() == pendiente )
                {
                    itActa->mostrarActa();
                }
            }

    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}

/*Método para mostrar los jurados de tipo internos y externos*/
void Universidad::mostrarJuradosInternosOExternos()
{
    int tipoDeJuradoBuscado;
    cout << "Ingrese el tipo de jurado que busca: \n1.Interno\n2.Externo\nOpcion: ";
    cin >> tipoDeJuradoBuscado;
    switch(tipoDeJuradoBuscado)
    {
        case 1:
            cout<<"Jurados Internos: " << endl;
            for (list<Persona>::iterator itPersonas = listaDePersonas.begin(); itPersonas != listaDePersonas.end(); itPersonas++)
            {
                if (itPersonas->getRolPersona() == 3 && itPersonas->getObtenerTipoInternoExternoJurado() == "Interno")
                {
                    itPersonas->mostrarPersona();
                }
            }
            break;
        case 2:
            cout<<"Jurados Externos: " << endl;
            for (list<Persona>::iterator itPersonas = listaDePersonas.begin(); itPersonas != listaDePersonas.end(); itPersonas++)
            {
                if (itPersonas->getRolPersona() == 3 && itPersonas->getObtenerTipoInternoExternoJurado() == "Externo")
                {
                    itPersonas->mostrarPersona();
                }
            }
            break;
    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}

/*Método que recibe un id de acta para eliminar de la lista de actas y que esta no aparezca cuando se pida imprimir*/
void Universidad::eliminarActaPorId()
{
    int idActaAEliminar;
    cout<<"Ingrese el id de la acta que desea eliminar: ";
    cin>>idActaAEliminar;
    if(comprobarExistenciaActa(idActaAEliminar) != 1)
    {
        cout << "\n==============================\n";
        cout << "El acta no existe.\n";
        cout << "==============================\n";
        return ;
    }
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end();itActas++)
    {
        if(itActas->getIdActa() == idActaAEliminar)
        {
            cout << "Entro\n";
            listaDeActas.erase(itActas);
            break;
        }
    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}

/*Método para cambiar el estado de acta de abierto a cerrado y que esta no pueda ser modificada*/
void Universidad::cerrarActaPorId(){
    int idActaACerrar;
    cout<<"Ingrese el id de la acta que desea cerrar: "<<endl;
    cin>>idActaACerrar;
    if(comprobarExistenciaActa(idActaACerrar) != 1)
    {
        cout << "\n==============================\n";
        cout << "El acta no existe.\n";
        cout << "==============================\n";
        return ;
    }
    for(list<Acta>::iterator itActas = listaDeActas.begin(); itActas != listaDeActas.end();itActas++)
    {
        if(itActas->getIdActa() == idActaACerrar)
        {
            itActas->cambiarEstadoActa();
        }
    }
    cout << "\n==============================\n";
    cout << "Operacion realizada con exito.\n";
    cout << "==============================\n";
}

/*Método para recoger los datos de actas, personas y detalles de acta que terminan siendo mostrados en un txt de forma decente*/
void Universidad::crearTxt(){
    int idActa;
    cout << "Ingrese el id del acta a la que quiere crear el archivo: ";
    cin >> idActa;
    if(comprobarExistenciaActa(idActa) != 1)
    {
        cout << "\n==============================\n";
        cout << "El acta no existe.\n";
        cout << "==============================\n";
        return ;
    }
    for (list<Acta>::iterator it = listaDeActas.begin(); it != listaDeActas.end(); it++)
    {
        if(it->getIdActa() == idActa)
        {
            it->metodoCrearTxt();
        }
    }
    
}