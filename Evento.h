#include <iostream>
#include "Asistente.h"
#pragma once
using namespace std;



class Evento{
    private:
        int duracion;
        string nombre;
        string tema;
        Asistente** asistentes = new Asistente*[5];
        int asistentesMaximos;
        int cantAsistentes;
    public:
        Evento();
        Evento(int duracion, string nombre, string tema, int asistentesMax);
        int getDuracion();
        string getNombre();
        string getTema();
        bool agregarAsistente(string nombre, int edad, string ocupacion);
        void setDuracion(int duracion);
        void setNombre(string nombre);
        void setTema(string tema);
};