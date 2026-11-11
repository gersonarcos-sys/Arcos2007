#include "../include/Bus.h"
#include "../include/Excepciones.h"
#include "../include/Variante.h"

Bus::Bus(string placa, int puestos) : Vehiculo(placa), puestos(puestos) {
    if (puestos < 1) {
        throw DatosInvalidosException("Error: Un bus debe tener al menos 1 puesto.");
    }
}

Bus::~Bus() {
    cout << "Destruyendo Bus " << placa << endl;
}

void Bus::setPuestos(int pst) { puestos = pst; }
int Bus::getPuestos() const { return puestos; }
string Bus::getTipo() const { return "Bus"; }

string Bus::info() const {
    return Vehiculo::info();
}
int Bus::cobrar() const {
     return 14000 + (300 * DECENA); 
}
