#include <iostream>
#include "Asistente.h"

Asistente::Asistente(string nombre, int edad, string ocupacion){
    this->nombre = nombre;
    this->edad = edad;
    this->ocupacion = ocupacion;
}

string Asistente::getNombre(){
    return nombre;
}

int Asistente::getEdad(){
    return edad;
}

string Asistente::getOcupacion(){
    return ocupacion;
}

void Asistente::setNombre(string nombre){
    this->nombre = nombre;
}

void Asistente::setEdad(int edad){
    this->edad = edad;
}

void Asistente::setOcupacion(string ocupacion){
    this->ocupacion = ocupacion;
}