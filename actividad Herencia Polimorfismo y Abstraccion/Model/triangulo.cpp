#include "triangulo.h"

Triangulo::Triangulo(){
}

Triangulo::Triangulo(float base, float altura){
	this->base = base;
	this->altura = altura;
}

void Triangulo::calcularArea(){
	this->area = (this->base * this->altura) / 2;
}

void Triangulo::calcularPerimetro(){
	this->perimetro = this->base * 3;
}

void Triangulo::mostrarFiguras(){
	cout << " Los lados del triangulo equilatero miden: " << base << endl;
	cout << " La altura del triangulo es: " << altura << endl;

	if(this->area == 0){
		this->calcularArea();
	}
	if(this->perimetro == 0){
		this->calcularPerimetro();
	}

	cout << " El area del triangulo es: " << this->area << endl;
	cout << " El perimetro del triangulo es: " << this->perimetro << endl;

	figuraGeometrica::mostrarFiguras();
}

float Triangulo::getBase(){
	return this->base;
}

float Triangulo::getAltura(){
	return this->altura;
}

void Triangulo::setBase(float base){
	this->base = base;
}

void Triangulo::setAltura(float altura){
	this->altura = altura;
}