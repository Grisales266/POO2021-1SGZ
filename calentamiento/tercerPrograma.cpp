#include <iostream>
#include <fstream>
using namespace std;

struct contactos{
	char nombre[20];
	char apellido[20];
	int telefono;
}numerosTelefonicos[50];

void crearContacto( int x ){
	cout << " Cual es su nombre?: ";
	cin >> numerosTelefonicos[x].nombre;
	cout << " Cual es su apellido?: ";
	cin >> numerosTelefonicos[x].apellido;
	cout << " Cual es su numero telefonico?: ";
	cin >> numerosTelefonicos[x].telefono;
	return;
}

void agregarContacto( int x ){
	int i;
	ofstream file;
	file.open( "contactos.txt" );
	file << "Nombre Apellido Telefono\n";
    for( i = 1; i <= x; i++ ){
    	file << numerosTelefonicos[i].nombre << " " << numerosTelefonicos[i].apellido << " " << numerosTelefonicos[i].telefono << "\n";
	}
	file.close();
	return;
}

void visualizarContacto( int x ){
	int i;
	for( i = 1; i <= x; i++ ){
		cout << "Nombre " << numerosTelefonicos[i].nombre << " Apellido " << numerosTelefonicos[i].apellido << " Telefono " << numerosTelefonicos[i].telefono << "\n";

	}
	return;
}

int main(){
	int opcion = 0, x = 0;
	cout << " Bienvenido al menu de su agenda para contactos.\nA continuacion se le presentaran unas opciones para elegir.\n";
	do{
		cout << "Opcion 1: Crear contacto nuevo.\nOpcion 2: Agregar contacto.\nOpcion 3: Visualizar contactos.\nOpcion 4. Salir.\nOpcion: ";
		cin >> opcion;	
		switch( opcion ){
			case 1:
				cout << " Ha escogido la opcion de crear contacto nuevo.\n ";
				crearContacto( x );
				break;
			case 2:
				cout << " Ha escogido la opcion de agregar contacto.\n ";
				agregarContacto( x );
				break;
			case 3:
				cout << " Ha escogido la opcion de visualizar contactos.\n ";
				visualizarContacto( x );
				break;
			case 4:
				cout << " Ha elegido la opcion de salir, gracias por usar nuestros servicios.\n ";
				break;
			x++;
		}
	}while( opcion != 4 );
	main();
}
