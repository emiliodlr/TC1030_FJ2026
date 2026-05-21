#include <iostream>
using namespace std;

class Animal{
    public: 
        Animal(int _edad);
        void setEdad( int _edad);
        int getEdad();
    private:
        int edad;
};

class Antilope: public Animal{
    public:
        Antilope(int _edad): Animal(_edad){

        };
    
};

class Mapache: public Animal{
    public:
        Mapache(int _edad, float _peso):Animal(_edad){
            peso = _peso;
        };
        void setPeso(float _peso);
        float getPeso();
    private:
        float peso;
};
// .........................................

Animal::Animal(int _edad){
    edad = _edad;
};

void Animal::setEdad(int _edad){
    edad = _edad;
};

int Animal::getEdad(){
    return edad;
};

void Mapache::setPeso(float _peso){
    peso = _peso;
};

float Mapache::getPeso(){
    return peso;
};


// .........................................

int main(){

    Antilope MiAntilope(5);
    cout << "La edad del antilope es " << MiAntilope.getEdad() << endl;

    Mapache MiMapache(2,3.5);
    cout << "\nLa edad del mapache es: " << MiMapache.getEdad() << endl;
    cout << "El peso del mapache es: " << MiMapache.getPeso() << endl;



}