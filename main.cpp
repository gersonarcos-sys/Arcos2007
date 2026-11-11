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

    return 0;
}

