#include<iostream>
using namespace std;

class Alumnno{
    private:
        int edad;
        string nombre;
    public:
        Alumnno(int edad, String nombre);
        string getNombre();
        int getEdad();
        void setNombre(string_nombre);
        void setEdad(int_edad);
};

Alumno::Alumno(int edad, string nombre){
        this-> nombre = nombre;
        this-> edad = edad;
}

string Alumno::getNombre(){
        return this-> nombre;
}