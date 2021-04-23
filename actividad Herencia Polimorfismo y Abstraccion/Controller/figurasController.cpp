#include "../Controller/figurasController.h"

const int figurasController::MAX_ITEMS = 10;

void figurasController::llenarCirculos(float radio){

	try{

		if(miListaCirculos.size() < MAX_ITEMS){

		cout << "Se agrega el circulo" << endl;
		Circulo *pCirculoTemporal = new Circulo(radio);
		miListaCirculos.push_back(*pCirculoTemporal);
		pListaMisFiguras.push_back(pCirculoTemporal);

		}

		else{
			throw "Se ha sobrepasado el limite de circulos";
		}

	}

	catch(const string *error){

		cout << " Error: " << error << endl;
	}
}

void figurasController::llenarRectangulos(float base, float altura){

	try{

		if(miListaRectangulos.size() < MAX_ITEMS){

			cout << " Se agrega el rectangulo" << endl;
			Rectangulo *pRectanguloTemporal = new Rectangulo(base, altura);
			miListaRectangulos.push_back(*pRectanguloTemporal);
			pListaMisFiguras.push_back(pRectanguloTemporal);
		}

		else{
			throw "Se ha sobrepasado el limite de rectangulos";
		}
	}

	catch(const string *error){
		cout << " Error: " << error << endl;
	}
}

void figurasController::llenarTriangulos(float base, float altura){

	try{

		if(miListaTriangulos.size() < MAX_ITEMS){

			cout << " Se agrega el triangulo" << endl;
			Triangulo *pTrianguloTemporal = new Triangulo(base, altura);
			miListaTriangulos.push_back(*pTrianguloTemporal);
			pListaMisFiguras.push_back(pTrianguloTemporal);
		}

		else{
			throw " Se ha sobrepasado el limite de triangulos";
		}
	}

	catch(const string *error){
		cout << " Error: " << error << endl;
	}
}

void figurasController::llenarCuadrados(float lado){

	try{

		if(miListaCuadrados.size() < MAX_ITEMS){

			cout << "Se agrega el cuadrado" << endl;
			Cuadrado *pCuadradoTemporal = new Cuadrado(lado);
			miListaCuadrados.push_back(*pCuadradoTemporal);
			pListaMisFiguras.push_back(pCuadradoTemporal);
		}
		else{
			throw " Se ha sobrepasado el limite de cuadrados";
		}

	}
	catch(const string *error){
		cout << " Error: " << error << endl;
	}
}

void figurasController::llenarCualquierFigura(){

	Circulo *pMyCirculo = new Circulo(30);
	Rectangulo *pMyRectangulo = new Rectangulo(15, 38);
	Triangulo *pMyTriangulo = new Triangulo(14.2, 10);
	Cuadrado *pMyCuadrado = new Cuadrado(4);

	this->pListaMisFiguras.push_back(pMyCirculo);
	this->pListaMisFiguras.push_back(pMyRectangulo);
	this->pListaMisFiguras.push_back(pMyTriangulo);
	this->pListaMisFiguras.push_back(pMyCuadrado);
}


list<Circulo> &figurasController::getListaCirculos(){

	list<Circulo> &listaCirculos = miListaCirculos;
	return listaCirculos;
}

list<Rectangulo> &figurasController::getListaRectangulos(){

	list<Rectangulo> &listaRectangulos = miListaRectangulos;
	return listaRectangulos;
}

list<Triangulo> &figurasController::getListaTriangulos(){

	list<Triangulo> &listaTriangulos = miListaTriangulos;
	return listaTriangulos;
}

list<Cuadrado> &figurasController::getListaCuadrados(){

	list<Cuadrado> &listaCuadrados = miListaCuadrados;
	return listaCuadrados;
}

list<figuraGeometrica *> &figurasController::getListaTodasFiguras(){
	return pListaMisFiguras;
}