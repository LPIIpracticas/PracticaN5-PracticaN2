#include "producto.h"
#include "producto.cpp"

int main()
{
 //   Producto azucar;
    Producto *ptrArroz=new Producto;

  //  azucar.ingresar();
  //  azucar.cambiarPrecio(5.43);
  //  azucar.imprimir();

    ptrArroz->ingresar();
    cout << "IGV: " <<ptrArroz->calcularIGV()<< endl;
    cout << "Valor de Producto: " <<ptrArroz->obtenerValorProducto()<<endl;

    return 0;
}