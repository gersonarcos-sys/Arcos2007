#include "../include/Ambulancia.h"
#include "../include/Propietario.h"
#include "../include/Variante.h"
#include <iostream>

using namespace std;

Ambulancia::Ambulancia(string placa, string unidad, string descripcion)
    : Vehiculo(placa), Emergencia(unidad, descripcion) {
    this->enEmergencia = false;
}

Ambulancia::~Ambulancia() {
    cout << "Destruyendo Ambulancia " << placa << endl;
}

string Ambulancia::getTipo() const {
    return "Ambulancia";
}

string Ambulancia::info() const {
    string estado = enEmergencia ? "EN EMERGENCIA" : "Sin emergencia";
    return Vehiculo::info() + " | Unidad: " + unidad + " | Desc: " + descripcion + " | Estado: " + estado;
}

int Ambulancia::cobrar() const {
    // Si la ambulancia está en emergencia, no se le cobra peaje
    if (enEmergencia) {
        return 0;
    }

    // Si NO está en emergencia, se cobra como a un carro
    int tarifaBase = 10000 + (200 * UNIDAD);
    if (propietario != nullptr && propietario->esVecino()) {
        int descuento = 30 + CENTENA;
        return tarifaBase * (100 - descuento) / 100;
    }
    return tarifaBase;
} 
