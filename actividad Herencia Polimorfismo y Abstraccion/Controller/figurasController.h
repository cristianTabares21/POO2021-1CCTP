#ifndef FIGURASCONTROLLER_H
#define FIGURASCONTROLLER_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <list>
#include "../Model/circulo.h"
#include "../Model/rectangulo.h"
#include "../Model/triangulo.h"
#include "../Model/cuadrado.h"
#include "../Model/figuraGeometrica.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

class figurasController{

	private:
		const static int MAX_ITEMS;
		list<Circulo> miListaCirculos;
		list<Rectangulo> miListaRectangulos;
		list<Triangulo> miListaTriangulos;
		list<Cuadrado> miListaCuadrados;
		list<figuraGeometrica *> pListaMisFiguras;

	public:
		list<Circulo> &getListaCirculos();
		list<Rectangulo> &getListaRectangulos();
		list<Triangulo> &getListaTriangulos();
		list<Cuadrado> &getListaCuadrados();
		list<figuraGeometrica *> &getListaTodasFiguras();

		void llenarCirculos(float radio);
		void llenarRectangulos(float base, float altura);
		void llenarTriangulos(float base, float altura);
		void llenarCuadrados(float lado);
		void llenarCualquierFigura();
};

#endif

