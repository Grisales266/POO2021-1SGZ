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
				cout << "Gracias por usar nuestro programa.\n";
		}
	}while(opcion != 3);
	return 0;
}

