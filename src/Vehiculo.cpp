#include "../include/Vehiculo.h"
#include "../include/Excepciones.h"

Vehiculo::Vehiculo(string placa) : placa(placa), propietario(nullptr) {
    if (placa.empty()) {
        throw PlacaInvalidaException("Error: La placa no puede estar vacia.");
    }
}

Vehiculo::~Vehiculo() {}

string Vehiculo::getPlaca() const { return placa; }
void Vehiculo::setPlaca(string p) { placa = p; }

void Vehiculo::setPropietario(Propietario* prop) { propietario = prop; }
Propietario* Vehiculo::getPropietario() const { return propietario; }

string Vehiculo::info() const {
    string propInfo = (propietario != nullptr) ? "Con dueño" : "Sin Propietario";
    return "Placa: " + placa;
}


