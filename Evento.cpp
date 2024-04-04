#include <iostream>
#include "Evento.h"
#include "Asistente.h"
using namespace std;


Evento::Evento() {
    this->duracion = 0;
    this->nombre = "";
    this->tema = "";
    this->asistentesMaximos = 0;
}

Evento::Evento(int duracion, string nombre, string tema, int asistentesMax){
    this->duracion = duracion;
    this->nombre = nombre;
    this->tema = tema;
    this->asistentesMaximos = asistentesMax;
    this->asistentes = new Asistente*[asistentesMax];
    this->cantAsistentes = 0;
}

int Evento::getDuracion(){
    return duracion;
}

string Evento::getNombre(){
    return nombre;
}

string Evento::getTema(){
    return tema;
}

void Evento::setDuracion(int duracion){
    this->duracion = duracion;
}

void Evento::setNombre(string nombre){
    this->nombre = nombre;
}

void Evento::setTema(string tema){
    this->tema = tema;
}

bool Evento::agregarAsistente(string nombre, int edad, string ocupacion){
    if(cantAsistentes >= asistentesMaximos){
        cout<< "Error: No se pueden agregar más asistentes." <<endl;
        return false;
    }

    asistentes[cantAsistentes] = new Asistente(nombre, edad, ocupacion);
    return true;
}