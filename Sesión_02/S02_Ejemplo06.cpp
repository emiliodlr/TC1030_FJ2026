#include <iostream>
using namespace std;

class Equipo{
    public:
        Equipo(string _nombreEquipo);
        void setNombreEquipo(string _nombreEquipo);
        string getNombreEquipo();

    private:
        string nombreEquipo;
};

// . . . . . Definición de métodos . . . . . . . . . 

        Equipo::Equipo(string _nombreEquipo){                   // Constructor
            nombreEquipo = _nombreEquipo;
        };
        void Equipo::setNombreEquipo(string _nombreEquipo){    // setter         setnombreequipo   set_nombre_equipo
            nombreEquipo = _nombreEquipo;
        };
        string Equipo::getNombreEquipo(){                      // getter
            return nombreEquipo;
        }


// . . . . . Programa principal . . . . . . . . . . . 


int main(){

    Equipo MiEquipo("SF 49ers");
    cout << "\nEl equipo se llama: " << MiEquipo.getNombreEquipo() << endl;

    MiEquipo.setNombreEquipo("Aguilas del America");
    cout << "\nEl equipo se llama: " << MiEquipo.getNombreEquipo() << endl;
    
}
