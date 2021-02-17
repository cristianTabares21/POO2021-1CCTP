#include <iostream>

using namespace std;

void calcularIva(int precioProducto){
    int precioProductoIva, precioFinal;
    float iva = 0.19;
    precioProductoIva = precioProducto*iva;
    precioFinal = precioProducto+precioProductoIva;

    cout<<"\n El precio del producto es: "<< precioProducto<<endl;
    cout<<" El precio del producto con iva es de: "<< precioFinal<<endl;

}

int main(){
    int precioProducto;
    cout<<"Digite el precio del producto: "; cin>>precioProducto;

    calcularIva(precioProducto);
    return 0;
}

