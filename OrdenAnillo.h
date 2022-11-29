#ifndef ORDENANILLO_H
#define ORDENANILLO_H
#include <iostream>
#include <string>
using namespace std;
#include "Orden.h"
#include "Anillo2.h"
#include "Cliente.h"
#include <vector>

class OrdenAnillo: public Orden{
    public:
        float precio_total;
        vector<Anillo> anillos;
        vector<Cliente> clientes;
        // Constructor default
        OrdenAnillo(): Orden(){
            anillos = vector<Anillo>();
            clientes = vector<Cliente>();
        }
        // Setters
        void setAnillos(vector<Anillo> an){
            anillos = an;
        }
        void setClientes(vector<Cliente> cl){
            clientes = cl;
        }
        //Otros métodos 
        void agregarAnillo(Anillo ani){
            anillos.push_back(ani);

        }
        void agregarCliente(Cliente cli){
            clientes.push_back(cli);
        }
        void imprimirOrden(){
            cout<< "ORDEN:"<<endl;
            for (int i = 0; i < clientes.size(); i++){
                cout <<"\t Cliente: " << clientes[i].nombre
                <<" "<< clientes[i].apellido<< endl;
                cout <<"\t Contacto: "<< clientes[i].telefono<<endl;
                cout <<"\t\t"<<clientes[i].correo<<endl;
            }
            for (int i = 0; i < anillos.size(); i++){
                cout<<"\n\t Pedido: ANILLO"<<endl;
                cout<<"\t Características:"<<endl;
                cout<<"\t\t Material: "<< anillos[i].material<<endl;
                if (anillos[i].diamante){
                    cout<<"\t\t Diamante: SI"<<endl;
                    cout<<"\t\t Número de diamantes: "<< anillos[i].num_diamantes<<endl;
                }else{
                    cout<<"\t\t Diamante: NO"<<endl;
                }
                cout<<"\t\t Talla: "<< anillos[i].talla<<endl;
                cout<<"\t\t Precio: "<< anillos[i].calcularPrecio()<<endl;
            }
            for (int i = 0; i < anillos.size(); i++){
                precio_total = 0;
                precio_total = precio_total + anillos[i].calcularPrecio();
            }
            cout<<"\t Precio total: "<< precio_total<<endl;
            precio_total = 0;
        }
}; 

#endif