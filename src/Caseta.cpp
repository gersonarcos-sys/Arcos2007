#include "../include/Caseta.h"
#include "../include/Excepciones.h"
#include <iostream>

using namespace std;

Caseta::Caseta() : operadorAsignado(nullptr), totalRecaudado(0), 
                   contadorCarros(0), contadorMotos(0), 
                   contadorBuses(0), contadorCamiones(0) {}

Caseta::~Caseta() {
     for (int i = 0; i < registros.size(); i++) {
        delete registros[i];
    }
    cout << "Destruyendo Caseta" << endl;
}
void Caseta::asignarOperador(Operador* op) {
    operadorAsignado = op;
}

void Caseta::registrarPaso(Vehiculo* v) {
    int cobro = v->cobrar();
    totalRecaudado += cobro;

    if (v->getTipo() == "Carro") contadorCarros++;
    else if (v->getTipo() == "Moto") contadorMotos++;
    else if (v->getTipo() == "Bus") contadorBuses++;
    else if (v->getTipo() == "Camion") contadorCamiones++;

    registros.push_back(new RegistroPaso(v->getPlaca(), v->getTipo(), cobro));
}

int Caseta::getTotalRecaudado() const { return totalRecaudado; }

int Caseta::getContadorVehiculos(string categoria) const {
    if (categoria == "Carro") return contadorCarros;
    if (categoria == "Moto") return contadorMotos;
    if (categoria == "Bus") return contadorBuses;
    if (categoria == "Camion") return contadorCamiones;
    return 0;
}

void Caseta::finalizarJornada(int efectivoDeclarado) {
    if (efectivoDeclarado != totalRecaudado) {
        throw DescuadreCajaException("Error: Descuadre detectado en el cierre de caja.");
    }
}
