#include <string>
#include <iostream>
using namespace std;
#include "ninio.h"

string Ninio::getTutor()
{
    return tutor;
}
void Ninio::setTutor(string t)
{
    tutor = t;
}
void Ninio::imprimir()
{
    Persona::imprimir();
    cout << "tutor: " << tutor << endl;
}
void Ninio::ingresar()
{
    Persona::ingresar();
    cout << "tutor: ";
    cin.ignore();
    getline(cin, tutor);
}