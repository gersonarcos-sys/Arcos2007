#pragma once
#include "Vehiculo.h"

class Moto : public Vehiculo {
    private:
    int cilindraje;
    public:
    Moto(string placa, int cilindraje);
    ~Moto() override;
    void setCilindraje(int cilindraje);
    int getCilindraje() const;
    bool esAltoCilindraje() const;
    string getTipo() const;
    string Info() const;
    int cobrar() const;
};