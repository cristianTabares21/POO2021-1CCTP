#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "figuraGeometrica.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Triangulo : public figuraGeometrica{
	private:
		float base, altura;

	public:
		Triangulo();
		Triangulo(float base, float altura);
		virtual void mostrarFiguras();
		virtual void calcularArea();
		virtual void calcularPerimetro();
		float getBase();
		float getAltura();
		void setBase(float base);
		void setAltura(float altura);

};

#endif