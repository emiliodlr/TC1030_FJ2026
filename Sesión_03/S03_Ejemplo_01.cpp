#include <iostream>
using namespace std;

class Vehiculo{
    public:
        void enciende (){
            cout << "\n El motor esta encendido..." << endl;
        };
        int hp = 250;
        string marca = "Toyota";
};

class DeLujo: public Vehiculo{
    public:
        int capacidad = 400;

};

class Economica: public Vehiculo{
    public:
        string color = "Verde";
};

int main(){

    DeLujo MiCarrito;
    cout << "HP: " << MiCarrito.hp << endl;
    cout << "Marca: " << MiCarrito.marca << endl;
    cout << "Capacidad: " << MiCarrito.capacidad << endl;
    MiCarrito.enciende();

    Economica MiOtroCarrito;
    cout << "\nHP: " << MiOtroCarrito.hp << endl;
    cout << "Color: " << MiOtroCarrito.color << endl;
   
}