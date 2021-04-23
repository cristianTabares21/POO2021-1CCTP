#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "figuraGeometrica.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Rectangulo : public figuraGeometrica{
	private:
		float base, altura;

	public:
		Rectangulo();
		Rectangulo(float base, float altura);
		virtual void calcularArea();
		virtual void calcularPerimetro();
		virtual void mostrarFiguras();
		float getBase();
		float getAltura();
		void setBase(float base);
		void setAltura(float altura);
};


#endif