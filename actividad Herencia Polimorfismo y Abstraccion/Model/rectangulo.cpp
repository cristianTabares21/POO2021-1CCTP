#include "rectangulo.h"

Rectangulo::Rectangulo(){
}

Rectangulo::Rectangulo(float base, float altura){
	this->base = base;
	this->altura = altura;
}

void Rectangulo::calcularArea(){
	this->area = 2 * (this->base * this->altura);
}

void Rectangulo::calcularPerimetro(){
	this->perimetro = this->base * this->altura;
}

void Rectangulo::mostrarFiguras(){
	cout << " Base: " << base << endl;
	cout << " Altura: " << altura << endl;

	if(this->area == 0){
		this->calcularArea();
	}
	if(this->perimetro == 0){
		this->calcularPerimetro();
	}

	cout << " El area del rectangulo es: " << this->area << endl;
	cout << " El perimetro del rectanguo es: " << this->perimetro << endl;

	figuraGeometrica::mostrarFiguras();
}

float Rectangulo::getAltura(){
	return this->altura;
}

float Rectangulo::getBase(){
	return this->base;
}

void Rectangulo::setBase(float base){
	this->base = base;
}

void Rectangulo::setAltura(float altura){
	this->altura = altura;
}