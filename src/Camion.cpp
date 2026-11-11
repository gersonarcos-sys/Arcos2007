#include "../include/Camion.h"
#include "../include/Excepciones.h"
#include "../include/Variante.h"

Camion::Camion(string placa, int ejes) : Vehiculo(placa), ejes(ejes) {
    if (ejes < 2) {
        throw DatosInvalidosException("Error: Un camion debe tener al menos 2 ejes.");
    }
}

Camion::~Camion() {
    cout << "Destruyendo Camion " << placa << endl;
}

void Camion::setEjes(int ej) { ejes = ej; }
int Camion::getEjes() const { return ejes; }

void Camion::agregarEje() { 
    ejes++;
}

string Camion::getTipo() const { return "Camion"; }

string Camion::info() const {
    return Vehiculo::info();
}

int Camion::cobrar() const {
    int tarifaPorEje = 8000 + (100 * DECENA);
    return ejes * tarifaPorEje;
}