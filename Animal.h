#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
    private:
        std::string nombre;
        int edad;
    public:
        Animal (std::string, int);
        virtual void mostrar();
};

class Perro : public Animal {
    private:
        std::string accion;
    public:
        Perro(std::string, int, std::string);
        void mostrar();

};

class Gato : public Animal {
    private:
        std::string habilidad;
    public:
        Gato(std::string, int, std::string);
        void mostrar();

};

#endif