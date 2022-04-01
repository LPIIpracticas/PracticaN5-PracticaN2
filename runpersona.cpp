#include <string>
#include <iostream>
using namespace std;
#include "persona.h"
#include "persona.cpp"

#include "adulto.h"
#include "adulto.cpp"

#include "ninio.h"
#include "ninio.cpp"

int main()
{
    Persona Juan;
    Ninio pablito;
    Adulto DonJose;

    Juan.ingresar();
    Juan.imprimir();

    pablito.ingresar();
    pablito.imprimir();

    DonJose.ingresar();
    DonJose.imprimir();

    return 0;
}