#pragma once
#include <string>

using namespace std;

class Emergencia{
    protected:
    string unidad;
    string descripcion;
    bool enEmergencia;
    public:
    Emergencia(string unidad, string descripcion,bool enEmergencia= false);
    virtual ~Emergencia();
    void setUnidad(string unidad);
    void setDescripcion(string descripcion);
    void setEmergencia(bool emergencia);
    string getUnidad() const;
    string getDescripcion() const;
    bool enEmergencia1() const;

};