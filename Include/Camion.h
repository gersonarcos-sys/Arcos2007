#pragma once
#include "Vehiculo.h"

class Camion : public Vehiculo {
private:
    int ejes;
public:
    Camion(string placa, int ejes);
    ~Camion() override;
    void setEjes(int ejes);
    int getEjes() const;
    void agregarEje();
    string getTipo() const override;
    string info() const override;
    int cobrar() const override;
};