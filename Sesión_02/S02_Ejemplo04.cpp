#include <iostream>
using namespace std;

class Equipo{
    public:
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

    Equipo MiEquipo;
    MiEquipo.setNombreEquipo("SF 49ers");

    cout << "\nEl equipo se llama: " << MiEquipo.getNombreEquipo() << endl;
    

  
}
