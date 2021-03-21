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
        cout << "1.Crear personas.\n2.Crear actas de grado.\n3.Crear criterios y diligenciar calificaciones.\n4.Mostrar Personas.\n5.Mostrar Actas de grado.\n6.Consultar por tipo de trabajo.\n7.Consultar trabajos donde ha sido director un profesor.\n8.Consultar trabajos en los cuales ha participado un jurado.\n9. Consultar trabajos de un director.\n10.Consultar lista de jurados que han participado en los trabajos.\nOpcion: ";
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
                cout << "Ha elegido mostrar las personas.\n";
                cout << "=========================\n";
                javeriana.mostrarTodosPersona();
                break;
            case 5:
                cout << "\n=========================\n";
                cout << "Ha elegido mostar las actas de grado.\n";
                cout << "=========================\n";
                javeriana.mostrarTodasActa();
                break;
            case 6:
                cout << "\n=========================\n";
                cout << "Ha elegido mostar los detalles de acta por acta.\n";
                cout << "=========================\n";
                javeriana.mostrarTodasDetalleActa();
                break;
            case 7:
                cout << "\n=========================\n";
                cout << "Ha elegido consultar tipo de trabajo\n";
                cout << "=========================\n";
                javeriana.consultarTipoDeTrabajo();
                break;
            case 8:
                cout << "\n=========================\n";
                cout << "Ha elegido consultar trabajos que ha dirigido un jurado.";
                cout << "=========================\n";
                javeriana.consultarTrabajosDeUnJurado();
                break;
            case 9:
                cout << "\n=========================\n";
                cout << "Ha elegido consultar trabajos que ha dirigido un profesor.\n";
                cout << "=========================\n";
                javeriana.consultarTrabajosDeUnDirector();
            case 10:
                cout << "\n=========================\n";
                cout << "Ha elegido consultar la lista de jurados de las actas registradas.\n";
                cout << "=========================\n";
                javeriana.consultarListaJuradosDeActasRegistradas();
            case 11:
                cout << "\n=========================\n";
                cout << "Gracias por usar nuestro programa.\n";
                cout << "=========================\n";
                break;
        }
    }while(opcion != 11);
    return 0;
}