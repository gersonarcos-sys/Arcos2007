#include "../include/Persona.h"

Persona::Persona (string nombre, string documento) : nombre(nombre), documento(documento) {}

string Persona::getNombre() const { return nombre;}
string Persona::getDocumento() const { return documento;}