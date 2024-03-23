#include <iostream>
#include "Evento.h"


Evento::Evento(int duracion, string nombre){
    this->duracion = duracion;
    this->nombre = nombre;
}

int Evento::getDuracion(){
    return duracion;
}

string Evento::getNombre(){
    return nombre;
}

void Evento::setDuracion(int duracion){
    this->duracion = duracion;
}

void Evento::setNombre(string nombre){
    this->nombre = nombre;
}