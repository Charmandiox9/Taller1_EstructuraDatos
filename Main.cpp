#include <iostream>
#include "Evento.h"
#include "Asistente.h"

using namespace std;

const int eventosMaximos = 3;
//typedef Evento *Eptr;

/*bool crearEvento(int duracion, string nombre, string tipo, Eptr eventos[], int cantidadEventos){
    if (cantidadEventos >= eventosMaximos) {
        cout<< "Error: No se pueden agregar más eventos." <<endl;
        return false;
    }

    eventos[cantidadEventos] = new Evento(duracion, nombre);
    cantidadEventos++;
    return true;


};*/

int main(){

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
            string tipo = "";

            cout<<"Crear evento.\n"<<endl;
            cout<<"Indique el nombre del evento:"<<endl;
            cin>>nombre;
            cout<<"Indique la duración del evento:"<<endl;
            cin>>duracion;

            /*if(crearEvento(duracion, nombre, tipo, eventos, cantidadEventos)){
                cout<<"Evento creado correctamente!"<<endl;
            }*/

            cout<<"Bienvenido al sistema ...\n"<<endl;
            cout<<"1. Crear evento."<<endl;
            cout<<"2. Crear asistente."<<endl;
            cout<<"3. Hacer informe."<<endl;
            cout<<"4. Salir."<<endl;
            cin>>opcion;
        }

    }while(opcion != 4);



    /*for(int i = 0; i < cantidadEventos; i++) {
        cout<<"Nombre: " << eventos[i]->getNombre() << "\nduracion: " << eventos[i]->getDuracion()<<endl;
    }*/

    return 0;

};