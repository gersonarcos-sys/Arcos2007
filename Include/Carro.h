#pragma once
#include "Vehiculo.h"

class Carro: public Vehiculo{
private:
 int pasajeros;
public:
 Carro (string placa, int pasajeros);
 ~Carro() override;
 void setPasajeros(int pasajeros);
 int getPasajeros() const;
 string getTipo() const override;
 string info() const override;
 int cobrar()  const override;

};