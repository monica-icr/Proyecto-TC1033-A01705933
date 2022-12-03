#ifndef COLLAR_H
#define COLLAR_H
#include <iostream>
#include <string>
using namespace std;
#include "Figura.h"

class Collar: public Figura{
    private:
        int cadena;
    public: 
    // Constructor default
    Collar() : Figura(){
        cadena = 0;
    }
    // Setters
    void setCadena(int cad){
        cadena = cad;
    }
    // Getters
    int getCadenas(){
        return cadena;
    }
    // Otros métodos
    float calcularPrecio(){
        switch(num_material){
            case 1: precio = 4000;
                break;
            case 2: precio = 3500;
                break;
            case 3: precio = 3000;
                break;
            case 4: precio = 3500;
                break;
            case 5: precio = 4000;
                break;
            default: precio = 0;
        }
        precio = precio * cadena;
        if (num_figura > 0){
            precio = precio + 700;
        }
        
        precio = precio + mano_obra;

        return precio;
    }


};

#endif
