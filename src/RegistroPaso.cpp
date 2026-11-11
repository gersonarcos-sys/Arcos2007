#include"../include/RegistroPaso.h"
#include  <iostream>

using namespace std;

RegistroPaso::RegistroPaso(string placa, string categoria, int valorCobrado)
    : placa(placa), categoria(categoria), valorCobrado(valorCobrado) {}

RegistroPaso::~RegistroPaso() {
    cout << "Destruyendo Registro de Paso para: " << placa << endl;
}
string RegistroPaso::getPlaca() const { return placa; }
string RegistroPaso::getCategoria() const { return categoria; }
int RegistroPaso::getValorCobrado() const { return valorCobrado; }
