#ifndef CLASETRIANGULO_H
#define CLASETRIANGULO_H
#endif

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
