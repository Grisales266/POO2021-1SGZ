#include <iostream>
using namespace std;

int main(){
    float IVA = 1.16;
    int precio = 0, precioMasIva = 0;
    cout << " Bienvenido al supermercado \n"; 
    cout << "Ingrese el precio del producto: "; 
    cin >> precio;
    precioMasIva = ( precio * IVA );
    cout << "El precio de su producto mas iva es: " << (precioMasIva) << endl;
	return 0;
}
