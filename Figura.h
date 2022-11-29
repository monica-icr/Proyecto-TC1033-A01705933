#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
#include <string>
using namespace std;
#include "Joya.h"

class Figura: public Joya {
    public:
     // Atributos
        string figura;
        int num_figura;
    // Constructor default
    Figura(): Joya(){
        figura = "";
        num_figura = 0;
    }
    // Setters
    void setFigura(string fig){
        figura = fig;
    }
    void setNumFigura(int num_fig){
        num_figura = num_fig;
    }
    // Getters
    string getFigura(){
        return figura;
    }
    int getNumFigura(){
        return num_figura;
    }
};

#endif