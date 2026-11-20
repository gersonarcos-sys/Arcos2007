#pragma once
#include "Vehiculo.h"
#include "Emergencia.h"

class Ambulancia : public Vehiculo, public Emergencia {
    public :
    Ambulancia(string placa, string unidad,string descripcion);
    ~Ambulancia() override;
    int cobrar() const override;
    string getTipo() const override;
    string info() const override;
};
