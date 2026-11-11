#pragma once
#include <exception>
#include <string>

using namespace std;

class PlacaInvalidaException: public exception {
private:
 string msj;
public:
 PlacaInvalidaException(string msj);
 const char* what() const noexcept override;
};

class DatosInvalidosException : public exception {
private:
 string msj;
public:
 DatosInvalidosException(string msj);
 const char* what() const noexcept override;
};

class DescuadreCajaException : public exception {
private:
    string msj;
public:
    DescuadreCajaException(string msj);
    const char* what() const noexcept override;
};
