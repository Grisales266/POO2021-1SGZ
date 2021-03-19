#include "acta.h"
#include "persona.h"
#include <conio.h>
#include <iostream>
#include <list>
using namespace std;

int main(){
    int opcion = 0;
	Universidad javeriana;
    cout << "Bienvenido al menu del programa.\n";
    cin >> opcion;
		switch(opcion){
			case 1:
				cout << "Ha elegido crear personas.\n";
                javeriana.crearPersona();
			case 2:
				cout << "Gracias por usar nuestro programa.\n";
		}
	}while(opcion != 2);
	return 0;
}

