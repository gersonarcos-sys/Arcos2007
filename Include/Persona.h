#pragma once
#include <string>

using namespace std;

class Persona {
protected:
 string nombre;
 string documento;

public:
 Persona(string nombre, string documento);
 virtual ~Persona() {}
 string getNombre() const;
 string getDocumento() const;
 virtual string info() const = 0;

};