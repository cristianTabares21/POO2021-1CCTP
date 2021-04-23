#include "cuadrado.h"

Cuadrado::Cuadrado(){
}

Cuadrado::Cuadrado(float lado){
	this->lado = lado;
}

void Cuadrado::calcularArea(){
	this->area = this->lado * this->lado;
}

void Cuadrado::calcularPerimetro(){
	this->perimetro = this->lado + this->lado + this->lado + this->lado;
}

void Cuadrado::mostrarFiguras(){

	cout << " Los lados del cuadrado miden: " << lado << endl;

	if(this->area == 0){
		this->calcularArea();
	}
	if(this->perimetro == 0){
		this->calcularPerimetro();
	}

	cout << " El area del cuadrado es: " << this->area << endl;
	cout << " El perimetro del cuadrado es: " << this->perimetro << endl;

	figuraGeometrica::mostrarFiguras();
}

float Cuadrado::getLado(){
	return this->lado;
}

void Cuadrado::setLado(float lado){
	this->lado = lado;
}