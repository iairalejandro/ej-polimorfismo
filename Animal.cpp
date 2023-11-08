#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

void Animal::mostrar(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

Perro::Perro(string _nombre,int _edad, string _accion ) : Animal(_nombre, _edad) {
    accion = _accion;
}

void Perro::mostrar(){
    Animal::mostrar();
    cout << "Accion: " << accion << endl;
}

Gato::Gato(string _nombre,int _edad, string _habilidad ) : Animal(_nombre, _edad) {
    habilidad = _habilidad;
}

void Gato::mostrar(){
    Animal::mostrar();
    cout << "Habilidad: " << habilidad << endl;
}


