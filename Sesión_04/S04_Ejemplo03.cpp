#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Valor de a: ";
    cin >> a;
    cout << "Valor de b: ";
    cin >> b;
    
    
    int *ptrA;   //Crear un puntero a un elelento de tipo int
    ptrA = &a;    // Apuntar a la localidad de memoria de la variable "a"

    cout << "\nContenido al que apunta ptrA: " << *ptrA << " y se almacena en: " << ptrA << endl <<endl;
    cout << "Dirección de memoria del apuntador : " << &ptrA << endl; 

}