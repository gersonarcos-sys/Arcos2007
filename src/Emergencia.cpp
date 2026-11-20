#include "../include/Emergencia.h"
#include "../include/Excepciones.h"

Emergencia::Emergencia(string unidad, string descripcion, bool enEmergencia)
    : unidad(unidad), descripcion(descripcion), enEmergencia(enEmergencia) {
    if (unidad.empty() || descripcion.empty()) {
        throw DatosInvalidosException("Error: La unidad y descripcion de la emergencia no pueden estar vacias.");
    }
}

Emergencia::~Emergencia() {}

void Emergencia::setUnidad(string unidad) {
    this->unidad = unidad;
}
void Emergencia::setDescripcion(string descripcion) {
    this->descripcion = descripcion;
}

void Emergencia::setEmergencia(bool emergencia) {
    this->enEmergencia = emergencia;
}

string Emergencia::getUnidad() const {
    return unidad;
}

string Emergencia::getDescripcion() const {
    return descripcion;
}

bool Emergencia::enEmergencia1() const {
    return enEmergencia;
}

