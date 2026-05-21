#include <iostream>
using namespace std;

class Animal{
    public:
        Animal(int _edad);
        void setEdad(int _edad);
        int getEdad();
    private:
        int edad;
};

class Gato:public Animal{
    public:
        Gato(int _edad):Animal(_edad){

        };

};

class Leon:public Animal{
    public:
        Leon(int _edad, float _peso):Animal(_edad){
            peso = _peso;
        };
        void setPeso(float _peso){
            peso = _peso;
        };
        float getPeso(){
            return peso;
        };
    private:    
        float peso;
};
// ....................................

Animal::Animal(int _edad){
            edad = _edad;
        };
void Animal::setEdad(int _edad){
            edad = _edad;
        };
int Animal::getEdad(){
            return edad;
        };
// ....................................

int main(){

    /*Gato MiGato(3);
    cout << "La edad del gato es:  " << MiGato.getEdad() << endl;
    MiGato.setEdad(4);
    cout << "La edad del gato es:  " << MiGato.getEdad() << endl;*/
    float n_peso;
    
    cout << "Peso:" ;
    cin >> n_peso;
    Leon MiLeon(3,n_peso);
    cout << "La edad del leon es:  " << MiLeon.getEdad() << endl;
    cout << "El peso del leon es:  " << MiLeon.getPeso() << endl;

}