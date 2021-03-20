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
		cout << "1.Crear personas.\n2.Crear actas de grado.\n3.Mostrar personas.\n4.Mostrar actas.\n5.Diligenciar calificaciones.\nOpcion: ";
		cin >> opcion;
		switch(opcion){
			case 1:
				cout << "Ha elegido crear personas.\n";
                javeriana.crearPersona();
				break;
			case 2:
				cout << "Ha elegido crear actas de grado.\n";
				javeriana.crearActa();
				break;
			case 3:
				cout << "Ha elegido imprimir las personas.\n";
				javeriana.mostrarTodosPersona();
			case 4:
				cout << "Ha elegido imprimir las actas de grado.\n";
				javeriana.mostrarTodasActa();
			case 5:
				cout << "Ha escogido diligenciar calificaciones.\n";
				javeriana.introducirCalificaciones();
			case 6:
				cout << "Gracias por usar nuestro programa.\n";
		}
	}while(opcion != 6);
	return 0;
}

