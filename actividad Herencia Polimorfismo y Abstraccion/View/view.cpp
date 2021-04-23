#include "view.h"

void View::crearCirculo(){
	float radio;

	do{
		cout << " Digite el valor del radio: " << endl;
		cin >> radio;
	}while(radio <= 0);

	controlador.llenarCirculos(radio);
}

void View::crearRectangulo(){
	float base, altura;

	do{
		cout << " Digite el valor de la base: " << endl;
		cin >> base;
		cout << " Digite el valor de la altura: " << endl;
		cin >> altura;
	}while(base <= 0 && altura <= 0);

	controlador.llenarRectangulos(base, altura);
}

void View::crearTriangulo(){
	float base, altura;

	do{
		cout << " Digite el valor de uno de los lados (recuerde que miden lo mismo): " << endl;
		cin >> base;
		cout << " Digite el valor de la altura: " << endl;
		cin >> altura;
	}while(base <= 0 && altura <= 0);

	controlador.llenarTriangulos(base, altura);
}

void View::crearCuadrado(){
	float lado;

	do{
		cout << " Digite el valor de los lados: " << endl;
		cin >> lado;

	}while(lado <= 0);

	controlador.llenarCuadrados(lado);
}

void View::mostrarListaCirculos(){

	int contadorCirculos = 0;
	list<Circulo> &referenciaListaMisCirculos = controlador.getListaCirculos();
	list<Circulo>::iterator itCirculos;
	for(itCirculos = referenciaListaMisCirculos.begin(); itCirculos != referenciaListaMisCirculos.end(); itCirculos++){

		cout << " Informacion del triangulo " << contadorCirculos++ << ":" << endl;
		itCirculos->mostrarFiguras();
	}

}

void View::mostrarListaRectangulos(){

	int contadorRectangulos = 0;
	list<Rectangulo> &referenciaListaMisRectangulos = controlador.getListaRectangulos();
	list<Rectangulo>::iterator itRectangulos;
	for(itRectangulos = referenciaListaMisRectangulos.begin(); itRectangulos != referenciaListaMisRectangulos.end(); itRectangulos++){

		cout << " Informacion del rectangulo " << contadorRectangulos++ << ":" << endl;
		itRectangulos->mostrarFiguras();
	}
}

void View::mostrarListaTriangulos(){

	int contadorTriangulos = 0;
	list<Triangulo> &referenciaListaMisTriangulos = controlador.getListaTriangulos();
	list<Triangulo>::iterator itTriangulos;
	for(itTriangulos = referenciaListaMisTriangulos.begin(); itTriangulos != referenciaListaMisTriangulos.end(); itTriangulos++){

		cout << " Informacion del triangulo " << contadorTriangulos++ << ":" << endl;
		itTriangulos->mostrarFiguras();
	}
}

void View::mostrarListaCuadrados(){

	int contadorCuadrados = 0;
	list<Cuadrado> &referenciaListaMisCuadrados = controlador.getListaCuadrados();
	list<Cuadrado>::iterator itCuadrados;
	for(itCuadrados = referenciaListaMisCuadrados.begin(); itCuadrados != referenciaListaMisCuadrados.end(); itCuadrados++){

		cout << " Informacion del cuadrado " << contadorCuadrados++ << ":" << endl;
		itCuadrados->mostrarFiguras();
	}
}

void View::mostrarListaTodasFiguras(){

	int contadorFiguras = 0;
	controlador.llenarCualquierFigura();

	list<figuraGeometrica *> &pListaMisFigurasDiferentes = controlador.getListaTodasFiguras();
	list<figuraGeometrica *>::iterator itFigurasGeometricas;
	for(itFigurasGeometricas = pListaMisFigurasDiferentes.begin(); itFigurasGeometricas != pListaMisFigurasDiferentes.end(); itFigurasGeometricas++){

		figuraGeometrica *temporal = *itFigurasGeometricas;
		cout << " Figura con polimorfismo " << contadorFiguras++ << ":" << endl;
		temporal->mostrarFiguras();
		cout << "\n";
	}
}

int View::mostrarMenu(){
	int opcionUsuario;
	cout << " Menu " << endl;
	cout << " 1. Agregar circulos " << endl;
	cout << " 2. Agregar rectangulos " << endl;
	cout << " 3. Agregar triangulos " << endl;
	cout << " 4. Agregar cuadrados " << endl;
	cout << " 5. Mostrar lista de circulos " << endl;
	cout << " 6. Mostrar lista de rectangulos " << endl;
	cout << " 7. Mostrar lista de triangulos " << endl;
	cout << " 8. Mostrar lista de cuadrados " << endl;
	cout << " 9. Mostrar todas las figuras " << endl;
	cout << " 0. Salir " << endl;
	cout << " Digite una opcion: ";
	cin >> opcionUsuario;

	return opcionUsuario; 

}

void View::mostrarPrincipal(){
	int opcion;

	do{
		opcion = mostrarMenu();

		switch(opcion){

			case 1: 
				crearCirculo();
				break;

			case 2:
				crearRectangulo();
				break;

			case 3:
				crearTriangulo();
				break;

			case 4: 
				crearCuadrado();
				break;

			case 5:
				mostrarListaCirculos();
				break;

			case 6: 
				mostrarListaRectangulos();
				break;

			case 7:
				mostrarListaTriangulos();
				break;

			case 8:
				mostrarListaCuadrados();
				break;

			case 9:
				mostrarListaTodasFiguras();
				break;

			case 0:
				opcion = 0;
				break;
		}
	}while(opcion != 0);
}
