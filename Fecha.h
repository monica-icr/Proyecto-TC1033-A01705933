#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <string>
using namespace std;

class Fecha {
    public:
        // Atributos
        int dia;
        int mes;
        int anio;
        // Constructor default
        Fecha(){
            dia = 0;
            mes = 0;
            anio = 0;
        }
        // Setters
        void setDia(int d){
            dia = d;
        }
        void setMes(int m){
            mes = m;
        }
        void setAnio(int a){
            anio = a;
        }
        // Getters
        int getDia(){
            return dia;
        }
        int getMes(){
            return mes;
        }
        int getAnio(){
            return anio;
        }
};

#endif