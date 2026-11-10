#include "../include/Moto.h"
#include "../include/Propietario.h"
#include "../include/Excepciones.h"
#include "../include/Variante.h"

Moto::Moto(string placa, int cilindraje) : Vehiculo(placa), cilindraje(cilindraje) {
    if (cilindraje <= 0) {
        throw DatosInvalidosException("Error: El cilindraje de la moto debe ser mayor a cero.");
    }
}

Moto::~Moto() {
    cout << "Destruyendo Moto " << placa << endl;
}
void Moto::setCilindraje(int c) { cilindraje = c; }
int Moto::getCilindraje() const { return cilindraje; }
bool Moto::esAltoCilindraje() const { return cilindraje > 400; }
string Moto::getTipo() const { return "Moto"; }

string Moto::info() const {
    return Vehiculo::info(); 
}

int Moto::cobrar() const {
    int tarifaBase = 3000 + (100 * UNIDAD); 
    if (propietario != nullptr && propietario->esVecino()) {
        int descuento = 30 + CENTENA;
        return tarifaBase * (100 - descuento) / 100;
    }
    return tarifaBase;
}