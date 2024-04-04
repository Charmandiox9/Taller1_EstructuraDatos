#include <iostream>
#include "Evento.cpp"
#include "Asistente.h"

using namespace std;

const int eventosMaximos = 3;

bool crearEvento(int duracion, string nombre, string tema, int asistentesMax, Evento* eventos[], int cantidadEventos){
    if (cantidadEventos >= eventosMaximos) {
        cout<< "Error: No se pueden agregar más eventos." <<endl;
        return false;
    }

    eventos[cantidadEventos] = new Evento(duracion, nombre, tema, asistentesMax);
    return true;


};

int main(){

    Evento **eventos = new Evento*[eventosMaximos];
    eventos[0] = new Evento();
    eventos[1] = new Evento();
    eventos[2] = new Evento();

    //Eptr *eventos = new Eptr[eventosMaximos];
    int cantidadEventos = 0;

    int opcion = 0;


    do{
        cout<<"Bienvenido al sistema ...\n"<<endl;
        cout<<"1. Crear evento."<<endl;
        cout<<"2. Crear asistente."<<endl;
        cout<<"3. Hacer informe."<<endl;
        cout<<"4. Salir."<<endl;
        cin>>opcion;

        if(opcion == 1){
            string nombre = "";
            int duracion = 0;
            string tema = "";
            int maxAsistentes = 0;

            cout<<"Crear evento.\n"<<endl;
            cout<<"Indique el nombre del evento:"<<endl;
            cin>>nombre;
            cout<<"Indique la duración del evento:"<<endl;
            cin>>duracion;
            cout<<"Indique el tema del evento:"<<endl;
            cin>>tema;
            cout<<"Indique la cantidad máxima de asistentes"<<endl;
            cin>>maxAsistentes;

            if(crearEvento(duracion, nombre, tema, maxAsistentes, eventos, cantidadEventos)){
                cout<<"Evento creado correctamente!"<<endl;
                cantidadEventos++;
            }

            cout<<"Bienvenido al sistema ...\n"<<endl;
            cout<<"1. Crear evento."<<endl;
            cout<<"2. Crear asistente."<<endl;
            cout<<"3. Hacer informe."<<endl;
            cout<<"4. Salir."<<endl;
            cin>>opcion;
        } else if(opcion == 2){

        }

    }while(opcion != 4);



    for(int i = 0; i < cantidadEventos; i++) {
        cout<<"Nombre: " << eventos[i]->getNombre() << "\n duracion: " << eventos[i]->getDuracion()<<endl;
    }

    return 0;

};