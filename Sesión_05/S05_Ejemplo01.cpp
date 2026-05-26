#include <iostream>
using namespace std;

class Animal{
    public:
        void mover(){
            cout << "\n El animal se esta moviendo..." << endl;
        };
        void sonido(){
            cout << "El animal produce sonido..." << endl;
        };
};

class Cerdo:public Animal{
    public:
        void mover(){
            cout << "\n El CERDO se esta moviendo..." << endl;
        };
        void sonido(){
            cout << "El CERDO produce sonido..." << endl;
        };
};

// -------------------------

int main(){

    //Cerdo MiCerdito;
    //MiCerdito.mover();

    Animal *ptrCerdo;
    ptrCerdo = new Cerdo;

    //int *ptrA;
    //ptrA = &a;

    ptrCerdo-> mover();   
    ptrCerdo-> sonido(); 

}