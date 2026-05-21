#include <iostream>
using namespace std;

// Clase
class Futbolista {
public:

    // Método
    void saludar() {
        cout << "Hola, soy un futbolista." << endl;
    }

    // Método
    void entrenar() {
        cout << "Estoy entrenando para el partido." << endl;
    }
};

int main() {

    // Crear objeto
    Futbolista jugador1;

    // Llamar métodos
    jugador1.saludar();
    jugador1.entrenar();

    return 0;
}