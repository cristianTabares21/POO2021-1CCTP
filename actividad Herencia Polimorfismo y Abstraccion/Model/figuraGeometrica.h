#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H

#include <iostream>
#include <stdlib.h>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::string;

class figuraGeometrica{
	private:
		string color;

	protected:
		float area, perimetro;

	public:
		figuraGeometrica();
		figuraGeometrica(string color);
		virtual void calcularArea() = 0;
		virtual void calcularPerimetro() = 0;
		virtual void mostrarFiguras();
		void setColor(string color);
};


#endif