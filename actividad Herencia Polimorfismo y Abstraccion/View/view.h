#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "../Controller/figurasController.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::string;

class View{
	private:
		figurasController controlador;

	public:
		void crearCirculo();
		void crearRectangulo();
		void crearTriangulo();
		void crearCuadrado();
		void mostrarListaCirculos();
		void mostrarListaRectangulos();
		void mostrarListaTriangulos();
		void mostrarListaCuadrados();
		void mostrarListaTodasFiguras();
		int mostrarMenu();
		void mostrarPrincipal();
};

#endif