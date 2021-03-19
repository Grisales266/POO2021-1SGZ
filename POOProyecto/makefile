all: compilar
compilar: acta criterio detalleActa persona universidad main
	g++ -o Salida acta.o criterio.o detalleActa.o persona.o universidad.o main.o
acta: acta.cpp acta.h
	g++ -c acta.cpp
detalleActa: detalleActa.cpp detalleActa.h
	g++ -c detalleActa.cpp
criterio: criterio.cpp criterio.h
	g++ -c criterio.cpp
persona: persona.cpp persona.h
	g++ -c persona.cpp
universidad: universidad.cpp universidad.h
	g++ -c universidad.cpp
main: main.cpp acta.h criterio.h detalleActa.h persona.h universidad.h
	g++ -c main.cpp