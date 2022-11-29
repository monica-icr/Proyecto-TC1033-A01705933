#ifndef ORDENCOLLAR_H
#define ORDENCOLLAR_H
#include <iostream>
#include <string>
using namespace std;
#include "Orden.h"
#include "Collar2.h"
#include "Cliente.h"

class OrdenCollar: public Orden{
    protected: 
        float precio_total;
        vector<Collar> collares;
        vector<Cliente> clientes;
    public:
    // Constructor default
    OrdenCollar(): Orden(){
        collares = vector<Collar>();
        clientes = vector<Cliente>();
    }
    // Setters
    void setCollares(vector<Collar> co){
        collares = co;
    }
    void setClientes(vector<Cliente> cl){
        clientes = cl;
    }
    // Otros métodos
    void agregarCollar(Collar col){
        collares.push_back(col);
    }
    void agregarCliente(Cliente cli){
        clientes.push_back(cli);
    }
    void imprimirOrden(){
        cout<< "ORDEN:"<<endl;
        for (int i = 0; i < clientes.size(); i++){
            cout <<"\t Cliente: " << clientes[i].nombre
            <<" "<< clientes[i].apellido<< endl
            <<"\t Contacto: "<< clientes[i].telefono<<endl;
            cout<<"\t\t"<<clientes[i].correo<<endl;
        }
        for (int i = 0; i < collares.size(); i++){
            cout<<"\n\t Pedido: COLLAR"<<endl;
            cout<<"\t Características:"<<endl;
            cout<<"\t\t Material: "<< collares[i].material<<endl;
            cout<<"\t\t Figura: "<< collares[i].figura<<endl;
            cout<<"\t\t Cadenas: "<< collares[i].cadena<<endl;
            cout<<"\t\t Precio: "<< collares[i].calcularPrecio()<<endl;
        }
        for (int i = 0; i < collares.size(); i++){
            precio_total = 0;
            precio_total = precio_total + collares[i].calcularPrecio();
        }
        cout<<"\t Precio total: "<< precio_total<<endl;
    }
};

#endif