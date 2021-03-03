all: compilar
compilar: Circulo Rectangulo Triangulo Main
	g++ -o Salida claseCirculo.o claseRectangulo.o claseTriangulo.o Main.o
Circulo: claseCirculo.cpp claseCirculo.h
	g++ -c claseCirculo.cpp
Rectangulo: claseRectangulo.cpp claseRectangulo.h
	g++ -c claseRectangulo.cpp
Triangulo: claseTriangulo.cpp claseTriangulo.h
	g++ -c claseTriangulo.cpp
Main: main.cpp claseCirculo.h claseRectangulo.h claseTriangulo.h
	g++ -c main.cpp