#include "../include/Propietario.h"

Propietario::Propietario(string nombre, string documento, bool vecino) : Persona(nombre, documento), vecino(vecino){}

void Propietario::setVecino(bool veci) { vecino = veci;}
bool Propietario::esVecino() const { return vecino;}

string Propietario::info() const {
    return "Propietario " + nombre + ", Docu: " + documento + (vecino? "( es vecino)" : "( no es vecino)");
};