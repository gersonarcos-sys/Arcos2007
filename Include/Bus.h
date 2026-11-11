#pragma once
#include "Vehiculo.h"

class Bus : public Vehiculo {
private:
    int puestos;
public:
    Bus(string placa, int puestos);
    ~Bus() override;
    void setPuestos(int puestos);
    int getPuestos() const;
    string getTipo() const override;
    string info() const override;
    int cobrar() const override;
};
