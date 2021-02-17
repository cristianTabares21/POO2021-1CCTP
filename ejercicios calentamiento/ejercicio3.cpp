#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void agregarUsuarioContacto(){          // en esta funcion se crea el usuario y a su vez lo agrega al archivo...
	char nombreUsuario[15];
	char apellidoUsuario[15];
	long int numeroTel;

	cout<<" Digite su nombre: "; cin>>nombreUsuario;
	cout<<" Digite su apellido: "; cin>>apellidoUsuario;
	cout<<" Digite su numero de telefono: "; cin>>numeroTel;

	ofstream archivo;
	archivo.open("Contactos.txt", ios::app);  // aqui se abre el archivo

	archivo<<" Nombre: "<<nombreUsuario<<endl;
	archivo<<" Apellido: "<<apellidoUsuario<<endl;
	archivo<<" Numero telefono: "<<numeroTel<<endl;

	archivo.close();
}



void mostrarContactos(){
	ifstream archivo;
	string textoTemp;

	archivo.open("Contactos.txt", ios::in);

	while(!archivo.eof()){    // esto significa que el ciclo va a iterar siempre y cuando no sea el final del archivo...
		getline(archivo, textoTemp);
		cout<<textoTemp<<endl;
	}

	archivo.close();
}

int main(){
	int opcionUsuario;
	int salidaUsuario = 1;

	while(salidaUsuario == 1){
		cout<<" Digite su opcion: \n 1. Agregar un nuevo contacto\n 2. Visualizar los contactos\n 0. Salir\n"; cin>>opcionUsuario;

		if(opcionUsuario == 1){
			agregarUsuarioContacto();
			salidaUsuario = 1;
		}
		else if(salidaUsuario == 2){
			mostrarContactos();
			salidaUsuario = 1;
		}
		else if(opcionUsuario == 0){
			salidaUsuario = 0;
		}
	}
	return 0;
}