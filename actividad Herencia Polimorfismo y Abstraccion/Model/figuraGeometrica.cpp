#include "figuraGeometrica.h"

figuraGeometrica::figuraGeometrica()
	:color("Verde"),area(0.0), perimetro(0.0)
{
}

figuraGeometrica::figuraGeometrica(string color)
	:figuraGeometrica()
{
	this->color = color;
}

void figuraGeometrica::mostrarFiguras(){
	cout << " El color de la figura es: " << this->color << endl;
}




