#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "figuraGeometrica.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Cuadrado : public figuraGeometrica{
	private:
		float lado;

	public:
		Cuadrado();
		Cuadrado(float lado);
		virtual void calcularArea() override;
		virtual void calcularPerimetro() override;
		virtual void mostrarFiguras() override;
		float getLado();
		void setLado(float lado);
};

#endif