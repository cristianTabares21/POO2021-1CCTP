#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "figuraGeometrica.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Circulo : public figuraGeometrica{
	private:
		float radio;
		const static float PI;

	public:
		Circulo();
		Circulo(float radio);
		virtual void calcularArea();
		virtual void calcularPerimetro();
		virtual void mostrarFiguras();
		float getRadio();
		void setRadio(float radio);

};





#endif