#pragma once
#include <string>

using namespace std;

class RegistroPaso {
 private:
 string placa;
 string categoria;
 int valorCobrado;
 public:
 RegistroPaso(string placa, string categoria, int valorCobrado);
    ~RegistroPaso();
    string getPlaca() const;
    string getCategoria() const;
    int getValorCobrado() const;   
};