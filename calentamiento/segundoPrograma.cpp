#include <iostream>
using namespace std;

void mostrarDatos( int i , int edadPersonas, char sexoPersonas[15], float alturaPersonas ){
	i = 1;
	cout << " La persona numero " << i << " tiene  " << edadPersonas << " anios, es de sexo " << sexoPersonas << " y su altura en metros es " << alturaPersonas << ".\n"; 
}

int datosPersonas( int cantidadPersonas ){
	int edadPersonas = 0, i;
	char sexoPersonas[15]; 
	float alturaPersonas = 0;
	for( i = 1; i <= cantidadPersonas; i++ ){
		cout << " Bienvenido persona numero " << i << endl;
		cout << " Cual es su edad?:  ";
		cin >> edadPersonas;
		cout << " Cual es su sexo?:  ";
		cin >> sexoPersonas;
		cout << " Cual es su altura en metros?:  ";
		cin >> alturaPersonas;
		mostrarDatos( i, edadPersonas, sexoPersonas, alturaPersonas );
	}
	
}

int main(){
	int cantidadPersonas;
	cout << " Bienvenido al sistema de registro.\nCuantas personas desea registrar?: ";
	cin >> cantidadPersonas;
	datosPersonas( cantidadPersonas );
}

