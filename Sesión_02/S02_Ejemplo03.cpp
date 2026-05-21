#include <iostream>
using namespace std;

class Equipo {
public:
    string nombreEquipo;  // Atributo público

    // Método público para mostrar el nombre del equipo
    void mostrarNombre() {
        cout << "El equipo se llama: " << nombreEquipo << endl;
    }
};

int main() {
    Equipo MiEquipo;
    MiEquipo.nombreEquipo = "SF 49ers";  // Acceso directo al atributo

    MiEquipo.mostrarNombre();  // Llamamos al método para mostrar el nombre

    return 0;
}
