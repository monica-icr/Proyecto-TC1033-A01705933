#ifndef ORDEN_H
#define ORDEN_H
#include <iostream>
#include <string>
using namespace std;
#include "Fecha.h"

class Orden {
    public:
        Fecha fecha;
        string metodo_pago;
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
    // Getters
    Fecha getFecha(){
        return fecha;
    }
    string getMetodoPago(){
        return metodo_pago;
    }
};

#endif