#include "universidad.h"
#include <conio.h>
#include <iostream>
#include <list>
using namespace std;

int main(){
    int opcion = 0;
    Universidad javeriana;
    cout << "Bienvenido al menu del programa.\n";
    do{
        cout << "1.Crear personas.\n2.Crear actas de grado.\n3.Crear criterios y diligenciar calificaciones.\n4.Calcular nota final.\n5.Mostrar Personas.\n6.Mostrar Actas de grado.\n7.Mostrar detalles de acta.\n8.Consultar actas por tipo de trabajo.\n9.Consultar trabajos en los cuales ha participado un jurado.\n10.Consultar trabajos de un director.\n11.Consultar lista de jurados que han participado en los trabajos.\n12.Mostrar jurados internos o externos.\n13.Consultar actas pendientes o rechazadas.\n14.Cerrar acta.\n15.Eliminar acta.\n16.Salir.\nOpcion: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                cout << "\n=========================\n";
                cout << "Ha elegido crear personas.\n";
                cout << "=========================\n";
                javeriana.crearPersona();
                break;
            case 2:
                cout << "\n=========================\n";
                cout << "Ha elegido crear actas de grado.\n";
                cout << "=========================\n";
                javeriana.crearActa();
                break;
            case 3:
                cout << "\n=========================\n";
                cout << "Ha elegido crear criterios y dilegenciar calificaciones.\n";
                cout << "=========================\n";
                javeriana.crearCriterio();
                break;
            case 4:
                cout << "\n=========================\n";
                cout << "Ha elegido calcular la nota final para un acta.\n";
                cout << "=========================\n";
                javeriana.calcularNotaFinal();
                break;
            case 5:
                cout << "\n=========================\n";
                cout << "Ha elegido mostrar las personas.\n";
                cout << "=========================\n";
                javeriana.mostrarTodosPersona();
                break;
            case 6:
                cout << "\n=========================\n";
                cout << "Ha elegido mostar las actas de grado.\n";
                cout << "=========================\n";
                javeriana.mostrarTodasActa();
                break;
            case 7:
                cout << "\n=========================\n";
                cout << "Ha elegido mostar los detalles de acta por acta.\n";
                cout << "=========================\n";
                javeriana.mostrarTodasDetalleActa();
                break;
            case 8:
                cout << "\n=========================\n";
                cout << "Ha elegido consultar tipo de trabajo\n";
                cout << "=========================\n";
                javeriana.consultarTipoDeTrabajo();
                break;
            case 9:
                cout << "\n=========================\n";
                cout << "Ha elegido consultar trabajos que ha dirigido un jurado.\n";
                cout << "=========================\n";
                javeriana.consultarTrabajosDeUnJurado();
                break;
            case 10:
                cout << "\n=========================\n";
                cout << "Ha elegido consultar trabajos que ha dirigido un profesor de rol director.\n";
                cout << "=========================\n";
                javeriana.consultarTrabajosDeUnDirector();
                break;
            case 11:
                cout << "\n=========================\n";
                cout << "Ha elegido consultar la lista de jurados de las actas registradas.\n";
                cout << "=========================\n";
                javeriana.consultarListaJuradosDeActasRegistradas();
                break;
            case 12:
                cout << "\n=========================\n";
                cout << "Ha elegido mostrar jurados internos o externos.\n";
                cout << "=========================\n";
                javeriana.mostrarJuradosInternosOExternos();
                break;
            case 13:
                cout << "\n=========================\n";
                cout << "Ha elegido consultar actas pendientes o rechazadas.\n";
                cout << "=========================\n";
                javeriana.consultarActasPendienteORechazadas();
                break;
            case 14:
                cout << "\n=========================\n";
                cout << "Ha elegido poner el estado del acta en cerrado.\n";
                cout << "=========================\n";
                javeriana.cerrarActaPorId();
                break;
            case 15:
                cout << "\n=========================\n";
                cout << "Ha elegido eliminar acta.\n";
                cout << "=========================\n";
                javeriana.eliminarActaPorId();
                break;
            case 16:
                cout << "\n=========================\n";
                cout << "Gracias por usar nuestro programa.\n";
                cout << "=========================\n";
                break;
        }
    }while(opcion != 16);
    return 0;
}