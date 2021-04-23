#
VIEW := view
CONTROLLER := controller
MODEL := model


all: programa
programa: figuraGeometrica circulo rectangulo triangulo cuadrado controller vista main
	g++ -o Ejecutable figuraGeometrica.o circulo.o rectangulo.o triangulo.o cuadrado.o figurasController.o view.o main.o
controller: ${CONTROLLER}/figurasController.cpp ${CONTROLLER}/figurasController.h ${MODEL}/circulo.h ${MODEL}/rectangulo.h ${MODEL}/triangulo.h ${MODEL}/cuadrado.h
	g++ -c ${CONTROLLER}/figurasController.cpp
circulo: ${MODEL}/circulo.cpp ${MODEL}/circulo.h
	g++ -c ${MODEL}/circulo.cpp
rectangulo: ${MODEL}/rectangulo.cpp ${MODEL}/rectangulo.h
	g++ -c ${MODEL}/rectangulo.cpp
triangulo: ${MODEL}/triangulo.cpp ${MODEL}/triangulo.h
	g++ -c ${MODEL}/triangulo.cpp
cuadrado: ${MODEL}/cuadrado.cpp ${MODEL}/cuadrado.h
	g++ -c ${MODEL}/cuadrado.cpp
figuraGeometrica:${MODEL}/figuraGeometrica.cpp ${MODEL}/figuraGeometrica.h
	g++ -c ${MODEL}/figuraGeometrica.cpp
vista: ${VIEW}/view.cpp ${VIEW}/view.h ${CONTROLLER}/figurasController.h
	g++ -c ${VIEW}/view.cpp
main: main.cpp ${VIEW}/view.h
	g++ -c main.cpp
clean: #comando para borrar los .o
	del *.o, del *.exe