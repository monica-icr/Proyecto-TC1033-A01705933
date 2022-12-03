#ifndef ORDENCOLLAR_H
#define ORDENCOLLAR_H
#include <iostream>
#include <string>
using namespace std;
#include "Orden.h"
#include "Collar.h"
#include "Cliente.h"

class OrdenCollar: public Orden{
    private: 
        float precio_total;
        vector<Collar> collares;
        vector<Cliente> clientes;
    public:
    // Constructor default
    OrdenCollar(): Orden(){
        collares = vector<Collar>();
        clientes = vector<Cliente>();
        precio_total = 0;
    }
    // Setters
    void setCollares(vector<Collar> co){
        collares = co;
    }
    void setClientes(vector<Cliente> cl){
        clientes = cl;
    }
    // Otros métodos
    void imprimirOrden(){
          cout<< "ORDEN:"<<endl;
        for (int i = 0; i < clientes.size(); i++){
            cout <<"\t Cliente: " << clientes[i].getNombre()
            <<" "<< clientes[i].getApellido()<< endl
            <<"\t Contacto: ";
            cout<<clientes[i].getCorreo()<<endl;
        }
        for (int i = 0; i < collares.size(); i++){
            cout<<"\n\t Pedido: COLLAR"<<endl;
            cout<<"\t Características:"<<endl;
            cout<<"\t\t Material: "<< collares[i].getMaterial()<<endl;
            cout<<"\t\t Figura: "<< collares[i].getFigura()<<endl;
            cout<<"\t\t Cadenas: "<< collares[i].getCadenas()<<endl;
            cout<<"\t\t Precio: "<< collares[i].calcularPrecio()<<endl;
        }
        for (int i = 0; i < collares.size(); i++){
            precio_total = precio_total + collares[i].calcularPrecio();
        }
        cout << "\t Método de Pago: "<<metodo_pago<<endl;
        cout<<"\t Precio total: "<< precio_total<<endl;
        cout <<"\tSu orden llegará en 20 días habiles a la dirección: "
        <<direccion.getCalle()<<" "<< direccion.getNumero()
        <<" "<<direccion.getColonia()<<" "<<direccion.getCiudad()
        <<" "<<direccion.getEstado()<<" CP: "<<direccion.getCP()
        <<endl;
        precio_total = 0;
    }
};

#endif
