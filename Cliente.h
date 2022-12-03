#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string>
using namespace std;

class Cliente {
       
    private: 
    // Atributos
        string nombre;
        string apellido;
        long long int telefono;
        string correo;
    public:
        // Constructor default
        Cliente(){
            nombre = "";
            apellido = "";
            telefono = 0;
            correo = "";
        }
        // Constructor con parametros
        Cliente(string nom, string ape, int tel, string cor){
            nombre = nom;
            apellido = ape;
            telefono = tel;
            correo = cor;
        }
        // Setters
        void setNombre(string nom){
            nombre = nom;
        }
        void setApellido(string ape){
            apellido = ape;
        }
        void setTelefono(long long int tel){
            telefono = tel;
        }
        void setCorreo(string cor){
            correo = cor;
        }
        // Getters
        string getNombre(){
            return nombre;
        }
        string getApellido(){
            return apellido;
        }
        int getTelefono(){
            return telefono;
        }
        string getCorreo(){
            return correo;
        }
};

#endif
