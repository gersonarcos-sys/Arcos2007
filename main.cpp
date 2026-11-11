#include <iostream>
#include <vector>
#include "include/Excepciones.h"
#include "include/Persona.h"
#include "include/Propietario.h"
#include "include/Operador.h"
#include "include/Vehiculo.h"
#include "include/Carro.h"
#include "include/Moto.h"
#include "include/Bus.h"
#include "include/Camion.h"
#include "include/Caseta.h"

using namespace std;

int main() {
   cout << "--- EVALUACION DE LA HOJA DE CASOS ---\n" << endl;

    vector<Vehiculo*> vehiculosMundo;
    vector<Persona*> personasMundo;

    Operador* op1 = new Operador("Gerson Arcos", "108090", "OP-503");
    personasMundo.push_back(op1);

    // Caso 1
    cout << "Caso 1: Carro ABC123, 3 pasajeros, propietario no vecino." << endl;
    Propietario* prop1 = new Propietario("Ivan Dario", "102030", false);
    personasMundo.push_back(prop1);
    Carro* c1 = new Carro("ABC123", 3);
    c1->setPropietario(prop1);
    cout << *c1 << '\n' << endl;


    // Caso 2
    cout << "Caso 2: El mismo carro, ahora con propietario vecino." << endl;
    prop1->setVecino(true);
    cout << *c1 << '\n' << endl;
    vehiculosMundo.push_back(c1);

    // Caso 3
    cout << "Caso 3: Moto XYZ45A de 125 cc, propietario vecino." << endl;
    Propietario* prop2 = new Propietario("Jessica Urbano", "405060", true);
    personasMundo.push_back(prop2);
    Moto* m1 = new Moto("XYZ45A", 125);
    m1->setPropietario(prop2);
    cout << *m1 << '\n' << endl;
    vehiculosMundo.push_back(m1);

    // Caso 4
    cout << "Caso 4: Moto MOT650 de 650 cc, sin propietario." << endl;
    Moto* m2 = new Moto("MOT650", 650);
    cout << *m2 << '\n' << endl;
    delete m2;

    // Caso 5
    cout << "Caso 5: Bus BUS777 de 38 puestos, propietario vecino." << endl;
    Propietario* prop3 = new Propietario("Dieguito", "656667", true);
    personasMundo.push_back(prop3);
    Bus* b1 = new Bus("BUS777", 38);
    b1->setPropietario(prop3);
    cout << *b1 << '\n' << endl;
    vehiculosMundo.push_back(b1);

    // Caso 6
    cout << "Caso 6: Camion CAM301 de 3 ejes, sin propietario." << endl;
    Camion* cam1 = new Camion("CAM301", 3);
    cout << *cam1 << '\n' << endl;

    // Caso 7
    cout << "Caso 7: El mismo camion despues de agregarle un eje." << endl;
    cam1->agregarEje();
    cout << *cam1 << '\n' << endl;
    vehiculosMundo.push_back(cam1);

        // Caso 8
    cout << "Caso 8: Crear un carro con la placa vacia." << endl;
    try {
        Carro* carroError = new Carro("", 4);
        delete carroError;
    } catch (const PlacaInvalidaException &e) {
        cout << "Capturada con exito en main: " << e.what() << endl;
    }
    cout << "\n";

    // Caso 9
    cout << "Caso 9: Crear un camion de 1 eje." << endl;
    try {
        Camion* camionError = new Camion("ERR123", 1);
        delete camionError;
    } catch (const DatosInvalidosException &e) {
        cout << "Capturada con exito en main: " << e.what() << endl;
    }
    cout << "\n";

    // Caso 10
    cout << "Caso 10: Pasan por la caseta los vehiculos de los casos 2, 3, 5 y 7." << endl;
    Caseta* caseta = new Caseta();
    caseta->asignarOperador(op1);

    for (int i = 0; i < vehiculosMundo.size(); i++) {
        caseta->registrarPaso(vehiculosMundo[i]);
    }

    cout << "   Recaudo Total de la Caseta: $" << caseta->getTotalRecaudado() << endl;
    cout << "   Conteo de vehiculos pasados:" << endl;
    cout << "   Carros: " << caseta->getContadorVehiculos("Carro") << endl;
    cout << "   Motos: " << caseta->getContadorVehiculos("Moto") << endl;
    cout << "   Buses: " << caseta->getContadorVehiculos("Bus") << endl;
    cout << "   Camiones: " << caseta->getContadorVehiculos("Camion") << "\n" << endl;

    int recaudoExacto = caseta->getTotalRecaudado();

    // Caso 11
    cout << "Caso 11: El operador declara exactamente el recaudo del caso 10." << endl;
    try {
        caseta->finalizarJornada(recaudoExacto);
        cout << "Resultado: La caja cuadra correctamente sin novedades." << endl;
    } catch (const DescuadreCajaException &e) {
        cout << e.what() << endl;
    }
    cout << "\n";

    // Caso 12
    cout << "Caso 12: El operador declara 1000 menos que el recaudo del caso 10." << endl;
    try {
        caseta->finalizarJornada(recaudoExacto - 1000);
    } catch (const DescuadreCajaException &e) {
        cout << "Capturada con exito en main: " << e.what() << endl;
    }
    cout << "\n";

    // Caso 13
    cout << "Caso 13: Liberacion ordenada de memoria dinamica." << endl;
    delete caseta;

    for (int i = 0; i < vehiculosMundo.size(); i++) {
        delete vehiculosMundo[i];
    }

    for (int i = 0; i < personasMundo.size(); i++) {
        delete personasMundo[i];
    }

    cout << "\n--- SEE YOU LATER ---" << endl;



    return 0;
}

