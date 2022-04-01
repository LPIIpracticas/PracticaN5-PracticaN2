
#include <string>
#include <iostream>
using namespace std;
#include "adulto.h"

string Adulto::getEstadoCivil()
{
    return estadoCivil;
}
void Adulto::setEstadoCivil(string e)
{
    estadoCivil = e;
}
void Adulto::imprimir()
{
    Persona::imprimir();
            cout
        << "estado Civil: " << estadoCivil << endl;
}
void Adulto::ingresar()
{
    Persona::ingresar();
    cout << "estado Civil: ";
    cin.ignore();
    getline(cin, estadoCivil);
}