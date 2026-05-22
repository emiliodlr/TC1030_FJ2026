#include <iostream>
using namespace std;

void intercambio(int x, int y){
    int tmp;
    tmp = x;
    x = y ;
    y = tmp ;
    cout << "\n x: " << x << "\t y:" << y << endl<< endl;
}

int main(){

    int a = 1;
    int b = 3;
    cout << "\n a: " << a << "\t b:" << b << endl<< endl;
    intercambio(a,b);
    cout << "\n a: " << a << "\t b:" << b << endl<< endl;

}