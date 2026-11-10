#include "../include/Vehiculo.h"
#include "../include/Excepciones.h"
#include "../include/Propietario.h"
#include "../include/Carro.h"
#include "../include/Moto.h"

Vehiculo::Vehiculo(string placa) : placa(placa), propietario(nullptr) {
    if (placa.empty()) {
        throw PlacaInvalidaException("Error: La placa no puede estar vacia.");
    }
}

Vehiculo::~Vehiculo() {}

string Vehiculo::getPlaca() const { return placa; }
void Vehiculo::setPlaca(string plac) { placa = plac; }

void Vehiculo::setPropietario(Propietario* prop) { propietario = prop; }
Propietario* Vehiculo::getPropietario() const { return propietario; }

string Vehiculo::info() const {
    string propInfo = (propietario != nullptr) ? "Con dueño" : "Sin Propietario";
    return "Placa: " + placa;
}
ostream &operator<<(ostream &os, Vehiculo &vehiculo) {
    os << "[" << vehiculo.getTipo() << "] " << vehiculo.info();
    if (vehiculo.getTipo() == "Carro") {
        Carro &car = (Carro&)vehiculo; 
        os << " | Pasajeros: " << car.getPasajeros();
    }
    else if (vehiculo.getTipo() == "Moto") {
        Moto &mot = (Moto&)vehiculo;
        string altoCilin = mot.esAltoCilindraje() ? "Si" : "No";
        os << " | Cilindraje: " << mot.getCilindraje() << "cc (Alto Cilindraje: " << altoCilin << ")";
    }
     os << " | Valor Cobro: $" << vehiculo.cobrar();
    return os;
}


