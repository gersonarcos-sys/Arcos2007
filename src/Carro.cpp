#include "../include/Carro.h"
#include "../include/Propietario.h"
#include "../include/Excepciones.h"
#include "../include/Variante.h"

    Carro::Carro(string placa, int pasajero) : Vehiculo(placa), pasajeros(pasajero) {
        if (pasajeros < 1){
            throw DatosInvalidosException(" Error: Un carro debe llevar al menos 1 pasajero");
        }
    }

    Carro::~Carro() {
        cout << "Destruyendo Carro" << placa << endl;
    }

    void Carro::setPasajeros(int pas) { pasajeros = pas;}
    int Carro:: getPasajeros() const { return pasajeros;}
    string Carro::getTipo() const { return "Carro";}

    string Carro::info() const {
        return Vehiculo::info();
    }

int Carro::cobrar() const {
    int tarifaBase = 10000 +  (200 * UNIDAD);
    if (propietario != nullptr && propietario->esVecino()) {
        int descuento = 30 + CENTENA;
        return tarifaBase * ( 100 - descuento)/100;
    }
    return tarifaBase;
}    

