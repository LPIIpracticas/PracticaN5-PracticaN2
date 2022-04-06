#include "producto.h"
#include "producto.cpp"

int main()
{
    char resp = ' ';
    Producto azucar;
    Producto *ptrArroz = new Producto;
    do
    {
        system("clear");
        azucar.ingresar();
        azucar.cambiarPrecio(5.43);
        azucar.imprimir();

        ptrArroz->ingresar();
        cout << ptrArroz->getNombre() << " IGV: " << ptrArroz->calcularIGV() << endl;
        cout << ptrArroz->getNombre() << " Valor total: " << ptrArroz->obtenerValorProducto() << endl;

        do
        {
            cout << "Desea continuar?(s/n): ";
            cin >> resp;
            resp = tolower(resp);
            if (resp != 's' && resp != 'n')
                cout << "ERROR: Ingrese solo 's' o 'n'..." << endl;
        } while (resp != 's' && resp != 'n');
    } while (resp == 's');
    cout << "#####################  Fin del programa! #####################" << endl;
    return 0;
}