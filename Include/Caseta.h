#pragma once
#include <string>
#include <vector>
#include <RegistroPaso.h>
#include <Operador.h>
#include <Vehiculo.h>

using namespace std;

class Caseta {
private:
    Operador* operadorAsignado;
    vector<RegistroPaso*> registros;
    int totalRecaudado;
    int contadorCarros;
    int contadorMotos;
    int contadorBuses;
    int contadorCamiones;
public:
    Caseta();
    ~Caseta();  
    void asignarOperador(Operador* op);
    void registrarPaso(Vehiculo* v);
    int getTotalRecaudado() const;
    int getContadorVehiculos(string categoria) const;
    void finalizarJornada(int efectivoDeclarado);
};
