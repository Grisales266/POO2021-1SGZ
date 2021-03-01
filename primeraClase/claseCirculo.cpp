#include <iostream>
#include <conio.h>
using namespace std;
const int CAP = 10;
const float PI = 3.1416;

class Circulo{
	private:
		float radio;
	public:
		Circulo();
		Circulo( float );
	 	void calcularAreaCirculo();
	 	void calcularPerimetroCirculo();
	 	float getRadio();
	 	void setRadio(float);
};

class Rectangulo{
	private:
		float ancho, largo;
	public:
		Rectangulo();
		Rectangulo(float, float);
		void calcularAreaRectangulo();
		void calcularPerimetroRectangulo();
		float getAncho();
		void setAncho(float);
		float getLargo();
		void setLargo(float);
};

class Triangulo{
	private:
		float base, altura;
	public:
		Triangulo();
		Triangulo(float, float);
		void calcularAreaTriangulo();
		void calcularPerimetroTriangulo();
		float getBase();
		void setBase(float);
		float getAltura();
		void setAltura(float);
};

Circulo::Circulo(){
	radio = 0;
}

Circulo::Circulo(float radio){
	this->radio = radio;
}

float Circulo::getRadio()
{
	return this->radio;
}

void Circulo::setRadio(float radio)
{
	this->radio = radio;
}

void Circulo::calcularAreaCirculo(){
	float areaCirculo;
	areaCirculo = ( PI * (radio*radio) );
	cout << "El area del circulo es: "<< areaCirculo << " en metros cuadrados." << endl;
}

void Circulo::calcularPerimetroCirculo(){
	float perimetroCirculo;
	perimetroCirculo = 2 * (PI * radio);
	cout << "El perimetro del circulo es: "<< perimetroCirculo << " en metros." << endl;
}

void crearCirculo(Circulo circulos[CAP], int contadorCirculos){
	int radio;
	cout << "Ingrese el radio del circulo " << contadorCirculos + 1 << " en metros: ";
	cin >> radio;
	circulos[contadorCirculos].setRadio(radio);
}

Rectangulo::Rectangulo(){
	ancho = 0;
	largo = 0;
}

Rectangulo::Rectangulo(float ancho, float largo){
	this->ancho = ancho;
	this->largo = largo;
}

float Rectangulo::getAncho()
{
	return this->ancho;
}

void Rectangulo::setAncho(float ancho)
{
	this->ancho = ancho;
}

float Rectangulo::getLargo()
{
	return this->largo;
}

void Rectangulo::setLargo(float largo)
{
	this->largo = largo;
}

void Rectangulo::calcularAreaRectangulo(){
	float areaRectangulo;
	areaRectangulo = ( ancho * largo );
	cout << "El area del rectangulo es: " << areaRectangulo << " en metros cuadrados." << endl;
	
}

void Rectangulo::calcularPerimetroRectangulo(){
	float perimetroRectangulo;
	perimetroRectangulo = (2 * ancho) + (2 * largo);
	cout << "El perimetro del rectangulo es: " << perimetroRectangulo << " en metros." << endl;
	
}

void crearRectangulo(Rectangulo rectangulos[CAP], int contadorRectangulos){
	int ancho, largo;
	cout << "Ingrese el ancho del rectangulo " << contadorRectangulos + 1 << " en metros: ";
	cin >> ancho;
	cout << "Ingrese el largo del rectangulo " << contadorRectangulos + 1 << " en metros: ";
	cin >> largo;
	rectangulos[contadorRectangulos].setAncho(ancho);
	rectangulos[contadorRectangulos].setLargo(largo);
}

Triangulo::Triangulo(){
	base = 0;
	altura = 0;
}

Triangulo::Triangulo(float, float){
	this->base = base;
	this->altura = altura;
}

float Triangulo::getBase()
{
	return this->base;
}

void Triangulo::setBase(float base)
{
	this->base = base;
}
 
float Triangulo::getAltura()
{
	return this->altura;
}

void Triangulo::setAltura(float altura)
{
	this->altura = altura;
}

void Triangulo::calcularAreaTriangulo(){
	float areaTriangulo;
	areaTriangulo = ((base * altura) / 2);
	cout << "El area del triangulo equilatero es: " << areaTriangulo << " en metros cuadrados.\n";
}

void Triangulo::calcularPerimetroTriangulo(){
	float perimetroTriangulo;
	perimetroTriangulo = (base * 3);
	cout << "El perimetro del triangulo equilatero es: " << perimetroTriangulo << " en metros.\n";
}

void crearTriangulo(Triangulo triangulos[CAP], int contadorTriangulos){
	int base, altura;
	cout << "Ingrese la base del triangulo " << contadorTriangulos + 1 << " en metros: ";
	cin >> base; 
	cout << "Ingrese la altura del triangulo " << contadorTriangulos + 1 << " en metros: ";
	cin >> altura;
	triangulos[contadorTriangulos].setBase(base);
	triangulos[contadorTriangulos].setAltura(altura);
}

void mostrarFiguras(Circulo circulos[CAP], Rectangulo rectangulos[CAP], Triangulo triangulos[CAP], int contadorCirculos, int contadorRectangulos, int contadorTriangulos){
	int i, j, k;
	
	cout << "------------Circulos--------------\n";
	for( i = 0; i < contadorCirculos; i++ ){
		cout << "Circulo numero " << i+1<<".\n";
		cout << "Radio: " << circulos[i].getRadio() << " metros.\n";
		circulos[i].calcularAreaCirculo();
		circulos[i].calcularPerimetroCirculo();
		cout << "\n";
	};
	
	cout << "----------Rectangulos-------------\n";
	
	for( j = 0; j < contadorRectangulos; j++ ){
		cout << "Rectangulo numero " << j+1<<".\n";
		cout << "Ancho: " << rectangulos[j].getAncho() << " metros.\n";
		cout << "Largo: " << rectangulos[j].getLargo() << " metros.\n";
		rectangulos[j].calcularAreaRectangulo();
		rectangulos[j].calcularPerimetroRectangulo();
		cout << "\n";
	};
	
	cout << "----------Triangulos-------------\n";
	
	for( k = 0; k < contadorTriangulos; k++ ){
		cout << "Triangulo numero " << k+1<<".\n";
		cout << "Base: " << triangulos[k].getBase() << " metros.\n";
		cout << "Altura: " << triangulos[k].getAltura() << " metros.\n";
		triangulos[k].calcularAreaTriangulo();
		triangulos[k].calcularPerimetroTriangulo();
		cout << "\n";
	};
}

int main(){
	/*Circulo primerCirculo ( 3 );
	primerCirculo.calcularArea();
	Circulo segundoCirculo ( 5 );
	segundoCirculo.calcularArea(); Primer Punto */
	Circulo circulos[CAP];
	Rectangulo rectangulos[CAP];
	Triangulo triangulos[CAP];
	int opcion = 0, contadorCirculos = 0, contadorRectangulos = 0, contadorTriangulos = 0;
	cout << "Bienvenido al menu del programa.\n";
	do{
		cout << "1.Crear circulo.\n2.Crear rectangulo.\n3.Crear triangulo equilatero.\n4.Mostrar figuras.\n5.Salir.\nOpcion: ";
		cin >> opcion;
		switch(opcion){
			case 1:
				if(contadorCirculos < CAP){
					cout << "Ha elegido crear circulo.\n";
					crearCirculo(circulos, contadorCirculos);
					cout << "El circulo ha sido creado.\n";
					contadorCirculos++;
					break;
				}
				else{
					cout << "No hay espacio en el arreglo de circulos.\n";
					break;
				}
			case 2:
				if(contadorRectangulos < CAP){
					cout << "Ha elegido crear rectangulo.\n";
					crearRectangulo(rectangulos, contadorRectangulos);
					cout << "El rectangulo ha sido creado.\n";
					contadorRectangulos++;
					break;
				}
				else{
					cout << "No hay espacio en el arreglo rectangulos.\n";
					break;
				}
			case 3:
				if(contadorTriangulos < CAP){
					cout << "Ha elegido crear triangulo equilatero.\n";
					crearTriangulo(triangulos, contadorTriangulos);
					contadorTriangulos++;
					break;
				}
				else{
					cout << "No hay espacio en el arreglo de triangulos equilateros.\n";
					break;
				}
			case 4:
				cout << "Ha elegido mostrar las figuras.\n";
				mostrarFiguras(circulos, rectangulos, triangulos, contadorCirculos, contadorRectangulos, contadorTriangulos);
				break;
			case 5:
				cout << "Gracias por usar nuestro programa.\n";
		}
	}while(opcion != 5);
	return 0;
}
