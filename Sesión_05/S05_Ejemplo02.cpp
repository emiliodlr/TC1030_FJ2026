#include <iostream>
using namespace std;

class Deportista{
    public:
        Deportista(string _nombre, int _edad);
        virtual void mostrar();
    private:
        string nombre;
        int edad;
};

class Futbolista:public Deportista{
    public:
        Futbolista(string _nombre, int _edad, int _ranking);
        void mostrar();
    private:
        int ranking;
};

class Entrenador:public Deportista{
    public:
        Entrenador(string _nombre, int _edad, string _tel);
        void mostrar();
    private:
        string tel;
};

// -----------------------------------------------------
Deportista::Deportista(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
};

void Deportista::mostrar(){
    cout << "\nNombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
};

Futbolista::Futbolista(string _nombre, int _edad, int _ranking): Deportista(_nombre, _edad){
    ranking = _ranking;
}

void Futbolista::mostrar(){
    Deportista::mostrar();
    cout << "Ranking: " << ranking << endl;
};

Entrenador::Entrenador(string _nombre, int _edad, string _tel): Deportista(_nombre, _edad){
    tel = _tel;
};

void Entrenador::mostrar(){
    Deportista::mostrar();
    cout << "Telefono: " << tel << endl;
}
// -----------------------------------------------------

int main(){

    Deportista *vector[3];
   // Deportista *vector0
   // Deportista *vector1
   // Deportista *vector2
   // vector0 = new Futbolista("Jones", 22,3);

    vector[0] = new Futbolista("Jones", 22,3);
    vector[0]-> mostrar();
    cout << endl;

    vector[1] = new Entrenador("Fulgewncio", 58, "1234567890");
    vector[1]-> mostrar();
    cout << endl;

    vector[2] = new Deportista("Generico",15);
    vector[2]-> mostrar();


}