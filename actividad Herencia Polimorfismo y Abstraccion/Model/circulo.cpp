#include "circulo.h"

const float Circulo::PI = 3.1416;

Circulo::Circulo(){
}

Circulo::Circulo(float radio) : Circulo()
{
	this->radio = radio;
}

void Circulo::calcularArea(){
	this->area = PI * (this->radio * this->radio);
}

void Circulo::calcularPerimetro(){
	this->perimetro = (2 * PI) * this->radio;
}

void Circulo::mostrarFiguras(){

	cout << " El radio del circulo es: " << radio << endl;

	if(this->area == 0){
		this->calcularArea();
	}

	if(this->perimetro == 0){
		this->calcularPerimetro();
	}

	cout << " El area del circulo es: " << this->area << endl;
	cout << " El perimetro del circulo es: " << this->perimetro << endl;

	figuraGeometrica::mostrarFiguras();
}

float Circulo::getRadio(){
	return this->radio;
}

void Circulo::setRadio(float radio){
	this->radio = radio;
}

