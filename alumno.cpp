#include<iostream>
#include "alumno.h"

Alumno::Alumno(int edad, string nombre){
        this -> nombre = _nombre;
        this -> edad = _edad;
}

string Alumno::getNombre(){
        return nombre;
}