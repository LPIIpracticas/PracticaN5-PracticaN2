

#pragma once

#include <string>

using namespace std;
#include "persona.h"

class Adulto : public Persona
{
    private:
    string estadoCivil;
public:
string getEstadoCivil();

void
 setEstadoCivil(string e);
 
     void imprimir();
    void ingresar();
};