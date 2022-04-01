

#pragma once

#include <string>

using namespace std;

class Persona
{
    private:
    int dni;
    string nombre;
    char genero;
public:
//getters
    int getDni();
    string getNombre();
    char getGenero();
    //setters
    void setDni(int);
    void setNombre(string);
    void setGenero(char);
    //servicio
    void imprimir();
    void ingresar();
};