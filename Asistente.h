#include <iostream>
#pragma once
using namespace std;

class Asistente{
    private:
        string nombre;
        int edad;
        string ocupacion;
    public:
        Asistente(string nombre, int edad, string ocupacion);
        string getNombre();
        int getEdad();
        string getOcupacion();
        void setNombre(string nombre);
        void setEdad(int edad);
        void setOcupacion(string ocupacion);
};