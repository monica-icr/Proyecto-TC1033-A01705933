#ifndef ORDEN_H
#define ORDEN_H
#include <iostream>
#include <string>
using namespace std;
#include "Fecha.h"

class Orden {
    protected:
        Fecha fecha;
        string metodo_pago;
        string direccion;
    // Constructor default
    Orden(){
        fecha = Fecha();
        metodo_pago = "";
        direccion = "";
    }
    // Setters
    void setFecha(Fecha f){
        fecha = f;
    }
    void setMetodoPago(string met_pag){
        metodo_pago = met_pag;
    }
    void setDireccion(string dir){
        direccion = dir;
    }
    // Getters
    Fecha getFecha(){
        return fecha;
    }
    string getMetodoPago(){
        return metodo_pago;
    }
    string getDireccion(){
        return direccion;
    }
};

#endif
