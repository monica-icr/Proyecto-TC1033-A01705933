#ifndef ANILLO_H
#define ANILLO_H
#include <iostream>
#include <string>
using namespace std;
#include "Diamante.h"

class Anillo: public Diamante{
    private:
    // Atributos
        int talla;
        int num_talla; 
    public:
    // Constructor default
    Anillo(): Diamante(){
        talla = 0;
        num_talla = 0;
        mano_obra = 150;
    }
    // Setters
    void setTalla(int tall){
        talla = tall;
    }
    void setNumTalla(int num_tall){
        num_talla = num_tall;
    }
    // Getters
    int getTalla(){
        return talla;
    }
    int getNumTalla(){
        return num_talla;
    }
    // Otros métodos
    float calcularPrecio(){
        switch(num_material){
            case 1: precio = 2000;
                break;
            case 2: precio = 1500;
                break;
            case 3: precio = 1000;
                break;
            case 4: precio = 1500;
                break;
            case 5: precio = 2000;
                break;
            default: precio = 0;
        }
        switch(num_talla){
            case 1: precio = precio * 4;
                break;
            case 2: precio = precio * 4.1;
                break;
            case 3: precio = precio * 4.2;
                break;
            case 4: precio = precio * 4.3;
                break;
            case 5: precio = precio * 4.4;
                break;
            case 6: precio = precio * 4.5;
                break;
            case 7: precio = precio * 4.6;
                break;
            case 8: precio = precio * 4.7;
                break;
            default: precio = 0;
        }
        if(diamante == true){
            precio = precio + 1000*num_diamantes;
        }

        precio = precio + mano_obra;
        return precio;
    }

};

#endif
