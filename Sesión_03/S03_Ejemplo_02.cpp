#include <iostream>
using namespace std;

class Operacion{
    public:
        void pedir1();
        void pedir2();
        void mostrar();
    protected:
    //private:
        int valor1, valor2, resultado;
};

class Suma:public Operacion{
    public:
        void proceso();
};

// ......   Definición de métodos ................

void Operacion::pedir1(){
    cout << "Ingresa el primer valor: ";
    cin >> valor1;
};

void Operacion::pedir2(){
    cout << "Ingresa el segundo valor: ";
    cin >> valor2;
};

void Suma::proceso(){
    resultado = valor1 + valor2 ;
};

void Operacion::mostrar(){
    cout << "El resultado es: " << resultado << endl;
};

// ......  Main  .............................


int main(){

    Suma MiSuma;
    MiSuma.pedir1();
    MiSuma.pedir2();
    MiSuma.proceso();
    MiSuma.mostrar();

}