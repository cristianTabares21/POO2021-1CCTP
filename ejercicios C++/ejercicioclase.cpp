#include <iostream>

class Circulo{
private:
	float radio;
	const float PI = 3.1415;

public:
	Circulo();
	Circulo(float);
	void calcularAreaCirculo();
	void calcularPerimetroCirculo();
	int getRadio();
	void setRadio(float radio);
};

class Rectangulo{
private:
	float base, altura;

public:
	Rectangulo();
	Rectangulo(float, float);
	void calcularAreaRectangulo();
	void calcularPerimetroRectangulo();
	void setBase(float base);
	void setAltura(float altura);
};

class Triangulo{
private:
	float base, altura, lados;

public:
	Triangulo();
	Triangulo(float, float, float);
	void calcularAreaTriangulo();
	void calcularPerimetroTriangulo();
	void setBase(float base);
	void setAltura(float altura);
	void setLados(float lados);
};

// CREACION DE LAS FUNCIONES DE LA CLASE CIRCULO!!!
Circulo::Circulo(){
	this->radio = 0;
}

Circulo::Circulo(float radio){
	this->radio = radio;
}

void Circulo::calcularAreaCirculo(){
	float areaCirculo;
	areaCirculo = PI*(radio*radio);
	std::cout<<" El area del circulo es: "<<areaCirculo<<std::endl;
}

void Circulo::calcularPerimetroCirculo(){
	float perimetroCirculo;
	perimetroCirculo = PI*(2*radio);
	std::cout<<" El perimetro del circulo es: "<<perimetroCirculo<<std::endl;
}

int Circulo::getRadio(){
	return this->radio;
}

void Circulo::setRadio(float radio){
	this->radio = radio;
}

// CREACION DE LAS FUNCIONES DE LA CLASE RECTANGULO!!!
Rectangulo::Rectangulo(){
	this->base = 0;
	this->altura = 0;
}

Rectangulo::Rectangulo(float base, float altura){
	this->base = base;
	this->altura = altura;
}

void Rectangulo::calcularAreaRectangulo(){
	float areaRectangulo;
	areaRectangulo = base*altura;
	std::cout<<" El area del rectangulo es: "<<areaRectangulo<<std::endl;
}

void Rectangulo::calcularPerimetroRectangulo(){
	float perimetroRectangulo;
	perimetroRectangulo = (2*base)+(2*altura);
	std::cout<<" El perimetro del rectangulo es: "<<perimetroRectangulo<<std::endl;
}

void Rectangulo::setBase(float base){
	this->base = base;
}

void Rectangulo::setAltura(float altura){
	this->altura = altura;
}

// CREACION DE LAS FUNCIONES DE LA CLASE TRIANGULO!!!
Triangulo::Triangulo(){
	this->base = 0;
	this->altura = 0;
	this->lados = 0;
}

Triangulo::Triangulo(float base, float altura, float lados){
	this->base = base;
	this->altura = altura;
	this->lados = lados;
}

void Triangulo::calcularAreaTriangulo(){
	float areaTriangulo;
	areaTriangulo = (base*altura)/2;
	std::cout<<" El area del triangulo es: "<<areaTriangulo<<std::endl;
}

void Triangulo::calcularPerimetroTriangulo(){
	float perimetroTriangulo;
	perimetroTriangulo = 3*lados;
	std::cout<<" El perimetro del triangulo equilatero es: "<<perimetroTriangulo<<std::endl;
}

void Triangulo::setBase(float base){
	this->base = base;
}

void Triangulo::setAltura(float altura){
	this->altura = altura;
}

void Triangulo::setLados(float lados){
	this->lados = lados;
}

// FIN DE LAS FUNCIONES DE LAS CLASES!!!

int darOpcionUsuario(){
	int opcionUsuario;
	std::cout<<" Digite: \n 1. Crear circulos\n 2. Crear rectangulos\n 3. Crear triangulos\n 0. Salir\n"; std::cin>>opcionUsuario;
	return opcionUsuario;
}

int main(){
	int opcionUsuario, cantidadCirculos=0, cantidadRectangulos=0, cantidadTriangulos=0, j;
	const int CAPACIDAD = 10;
	Circulo arrayCirculos [CAPACIDAD];
	Rectangulo arrayRectangulos [CAPACIDAD];
	Triangulo arrayTriangulos [CAPACIDAD];

	do{
		opcionUsuario = darOpcionUsuario();
		switch (opcionUsuario){
           case 1:
               if (cantidadCirculos < 10){
                	float radio;
                	std::cout << "Digite el radio del circulo " << cantidadCirculos + 1 << ": "; std::cin >> radio;
                	arrayCirculos[cantidadCirculos].setRadio( radio );
                	cantidadCirculos ++;
                } else {
                    	std::cout << "La lista de los circulos se encuentra sin posiciones disponibles" << std::endl;
                }
                for (j = 0; j < cantidadCirculos; j++){
                    std::cout << "La informaciond del circulo " << j + 1 << ":" << std::endl;
                    arrayCirculos[j].calcularAreaCirculo();
                    arrayCirculos[j].calcularPerimetroCirculo();
                }
                break;
            case 2:
                if ( cantidadRectangulos < 10 ){
                    float base, altura;
                    std::cout << "Digite la base del rectangulo " << cantidadRectangulos + 1 << ": "; std::cin >> base;
                    std::cout << "Digite la altura para el rectangulo " << cantidadRectangulos + 1 << ": "; std::cin >> altura;
                    arrayRectangulos[cantidadRectangulos].setBase(base);
                    arrayRectangulos[cantidadRectangulos].setAltura(altura);
                    cantidadRectangulos++;
                } else {
                    std::cout << "La lista de los rectangulos se encuentra sin posiciones disponibles" << std::endl;
                }
                for (j = 0; j < cantidadRectangulos; j++){
                    std::cout << "La informacion del rectangulo " << j + 1 << ":" << std::endl;
                    arrayRectangulos[j].calcularAreaRectangulo();
                    arrayRectangulos[j].calcularPerimetroRectangulo();
                }
                break;
            case 3:
                if ( cantidadTriangulos  < 10 ){
                    float base, altura, lados;
                    std::cout << "Digite la base del triangulo " << cantidadTriangulos + 1 << ": "; std::cin >> base;
                    std::cout << "Digite la altura del triangulo " << cantidadTriangulos + 1 << ": "; std::cin >> altura;
                    std::cout << "Ingrese el valor de uno de los lados del triangulo " << cantidadTriangulos + 1 << ": "; std::cin >> lados;
                    arrayTriangulos[cantidadTriangulos].setBase(base);
                    arrayTriangulos[cantidadTriangulos].setAltura(altura);
                    arrayTriangulos[cantidadTriangulos].setLados(lados);
                    cantidadTriangulos++;
                } else {
                    std::cout << "La lista de los triangulos se encuentra sin posiciones disponibles" << std::endl;
                }
                for (j = 0; j < cantidadTriangulos; j++){
                    std::cout << "La informacion del triangulo" << j + 1 << ":" << std::endl;
                    arrayTriangulos[j].calcularAreaTriangulo();
                    arrayTriangulos[j].calcularPerimetroTriangulo();
                }
                break;
        }
	} while(opcionUsuario != 0);
	return 0;
}