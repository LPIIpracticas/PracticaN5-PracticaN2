#include <string>
#include <iostream>
using namespace std;
#include "persona.h"

// getters
int Persona::getDni(){
    return dni;}

string    Persona::getNombre()
{
    return nombre;
}
char Persona::getGenero()
{
    return genero;
}
// setters
void Persona::setDni(int d)
{
    dni = d;
}
void Persona::setNombre(string n)
{
    nombre = n;
}
void Persona::setGenero(char g)
{
    genero = g;
}
// servicio
void Persona::imprimir()
{
    cout << "dni: " << dni << endl;
    cout << "nombre: "<< nombre << endl;
    cout << "genero: "<< genero << endl;
}
void Persona::ingresar()
{
    cout << "dni: ";
    cin >> dni;
     cout << "nombre: ";
     cin.ignore();
     getline(cin, nombre);

    cout << "genero: ";
    cin >> genero;
}