#pragma once
#include "Persona.h"

using namespace std;

class Operador : public Persona {
private:
 string codigoEmpleado;
public:
Operador( string nombre, string documento, string codigoEmpleado);
string getCodigoEmpleado() const;
string info() const override;
};