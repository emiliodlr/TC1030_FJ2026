#include <iostream>
using namespace std;

class Equipo{
    public:
        Equipo(string _nombreEquipo){                   // Constructor
            nombreEquipo = _nombreEquipo;
        };
        void setNombreEquipo(string _nombreEquipo){    // setter         setnombreequipo   set_nombre_equipo
            nombreEquipo = _nombreEquipo;
        };
        string getNombreEquipo(){                      // getter
            return nombreEquipo;
        }

    private:
        string nombreEquipo;
};

int main(){

    Equipo MiEquipo("SF 49ers");
    cout << "\nEl equipo se llama: " << MiEquipo.getNombreEquipo() << endl;

    MiEquipo.setNombreEquipo("Aguilas del America");
    cout << "\nEl equipo se llama: " << MiEquipo.getNombreEquipo() << endl;
    

  
}
