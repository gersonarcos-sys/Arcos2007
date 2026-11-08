#include "../include/Operador.h"
 
Operador::Operador(string nombre, string documento, string codigoEmpleado) : Persona(nombre, documento), codigoEmpleado(codigoEmpleado){}

string Operador ::getCodigoEmpleado() const{
        return codigoEmpleado;
}

string Operador::info()const{
    return "Operador: " + nombre + ", Codigo: " + codigoEmpleado;
}
