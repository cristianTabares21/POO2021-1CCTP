#include <iostream>

using namespace std;

void pedirDatosUsuario(){

	int edad;
	char sexo[10], nombre[20];
	float alturaMetros;

	cout<<" Digite su edad: "; cin>>edad;
	cout<<" Digite su nombre "; cin>>nombre;
	cout<<" Digite su sexo: "; cin>>sexo;
	cout<<" Digite su altura en metros: "; cin>>alturaMetros;

	cout<<"\n Nombre: "<<nombre<<endl;
	cout<<" Edad: "<<edad<<endl;
	cout<<" Sexo: "<<sexo<<endl;
	cout<<" Altura: "<<alturaMetros<<endl;

}


int main(){

	pedirDatosUsuario();
	return 0;
}