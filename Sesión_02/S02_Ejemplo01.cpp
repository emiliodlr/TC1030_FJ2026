#include <iostream>
using namespace std;

// Clase
class Futbolista {
public:
    // Atributos
    string nombre;
    string equipo;
    int numero;
    int goles;
};

int main() {

    // Crear objeto
    Futbolista jugador1;

    // Asignar valores a los atributos
    jugador1.nombre = "Lionel Messi";
    jugador1.equipo = "Inter Miami";
    jugador1.numero = 10;
    jugador1.goles = 25;

    // Mostrar información
    cout << "Nombre: " << jugador1.nombre << endl;
    cout << "Equipo: " << jugador1.equipo << endl;
    cout << "Numero: " << jugador1.numero << endl;
    cout << "Goles: " << jugador1.goles << endl;

    return 0;
}