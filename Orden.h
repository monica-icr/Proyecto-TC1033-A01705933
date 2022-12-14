#ifndef ORDEN_H
#define ORDEN_H
#include <iostream>
#include <string>
using namespace std;
#include "Fecha.h"
#include "Direccion.h"

class Orden {
    protected:
        Fecha fecha;
        string metodo_pago;
        Direccion direccion;
    public:
    // Constructor default
    Orden(){
        fecha = Fecha();
        metodo_pago = "";
    }
    // Setters
    void setFecha(Fecha f){
        fecha = f;
    }
    void setMetodoPago(string met_pag){
        metodo_pago = met_pag;
    }
    void setDireccion(Direccion dir){
        direccion = dir;
    }
    // Getters
    Fecha getFecha(){
        return fecha;
    }
    string getMetodoPago(){
        return metodo_pago;
    }
    Direccion getDireccion(){
        return direccion;
    }
};

#endif
