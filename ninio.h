


#pragma once

#include <string>

using namespace std;
#include "persona.h"

class Ninio : public Persona
{
    private:
    string tutor;
    public:
    string getTutor();
    void setTutor(string);
};