#ifndef DIRECCION_H
#define DIRECCION_H
#include <iostream>
#include <string>
using namespace std;

class Direccion{
    private:
    // Atributos
        string calle;
        int numero;
        string colonia;
        string ciudad;
        string estado;
        int cp;
    public:
    // Constructor default
        Direccion(){
            calle = " ";
            numero = 0;
            colonia = " ";
            ciudad = " ";
            estado = " ";
            cp = 0;
        }
    // Setters
        void setCalle(string cal){
            calle = cal;
        }
        void setNumero(int num){
            numero = num;
        }
        void setColonia(string col){
            colonia = col;
        }
        void setCiudad(string ciu){
            ciudad = ciu;
        }
        void setEstado(string est){
            estado = est;
        }
        void setCP(int c){
            cp = c;
        }
    // Getters
        string getCalle(){
            return calle;
        }
        int getNumero(){
            return numero;
        }
        string getColonia(){
            return colonia;
        }
        string getCiudad(){
            return ciudad;
        }
        string getEstado(){
            return estado;
        }
        int getCP(){
            return cp;
        }
};
#endif