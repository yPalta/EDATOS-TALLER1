#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
    Persona* siguiente = nullptr;
public:
    Persona(int edad, string nombre);
    int getEdad();
    string getNombre;
    void setEdad(int edad);
    void setNombre(string nombre);
    ~Persona();
};


Persona::Persona(int edad, string nombre){
    this->edad=edad;
    this->nombre=nombre;
}

int Persona::getEdad(){
    return this->nombre;
}