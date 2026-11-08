#pragma once
#include <Persona.h>

using namespace std;

class Propietario : Persona {
private:
 bool vecino;

public:
 Propietario(string nombre, string documento, bool vecino);
 void setVecino(bool vecino);
 bool esVecino() const;
 string info() const override;
};
