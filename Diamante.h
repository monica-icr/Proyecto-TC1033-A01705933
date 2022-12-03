#ifndef DIAMANTE_H
#define DIAMANTE_H
#include <iostream>
#include <string>
using namespace std;
#include "Joya.h"

class Diamante: public Joya {
    protected: 
     // Atributos
        bool diamante;
        int num_diamantes;
    public:
    // Constructor default
    Diamante(): Joya(){
        diamante = false;
        num_diamantes = 0;
    }
    // Setters
    void setDiamante(bool dia){
        diamante = dia;
    }
    void setNumDiamantes(int num_dia){
        num_diamantes = num_dia;
    }
    // Getters
    bool getDiamante(){
        return diamante;
    }
    int getNumDiamantes(){
        return num_diamantes;
    }
};

#endif
