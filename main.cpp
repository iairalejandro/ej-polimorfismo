#include <iostream>
#include "Animal.h"

using namespace std;

int main() {

    Animal *vector[2];

    vector[0] = new Perro("Firu",2,"ladrar");
    vector[1] = new Gato("Michi",1,"salto alto");

    vector[0]->mostrar();
    cout << endl;
    vector[1]->mostrar();
}