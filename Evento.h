#include <iostream>
#pragma once
using namespace std;



class Evento{
    private:
        int duracion;
        string nombre;
    public:
        Evento(int duracion, string nombre);
        int getDuracion();
        string getNombre();
        void setDuracion(int duracion);
        void setNombre(string nombre);
};