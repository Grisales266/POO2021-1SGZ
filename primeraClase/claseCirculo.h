#ifndef CLASECIRCULO_H
#define CLASECIRCULO_H
#endif

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
