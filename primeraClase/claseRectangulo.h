#ifndef CLASERECTANGULO_H
#define CLASERECTANGULO_H
#endif

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
