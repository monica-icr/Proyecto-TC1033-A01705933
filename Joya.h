#ifndef JOYA_H
#define JOYA_H
#include <iostream>
using namespace std;
#include <string>

class Joya {  
    public:
    // Atributos
        string material;
        int num_material;
        float mano_obra;
        float precio;
    // Constructor default
    Joya(){
        material = " ";
        num_material = 0;
        mano_obra = 0;
        precio = 0;
    }
    // Setters
    void setMaterial(string mat){
        material = mat;
    }
    void setNumMaterial(int num_mat){
        num_material = num_mat;
    }
    // Getters
    string getMaterial(){
        return material;
    }
    int getNumMaterial(){
        return num_material;
    }
};

#endif