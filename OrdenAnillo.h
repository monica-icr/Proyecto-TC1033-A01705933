#ifndef ORDENANILLO_H
#define ORDENANILLO_H
#include <iostream>
#include <string>
using namespace std;
#include "Orden.h"
#include "Anillo.h"
#include "Cliente.h"
#include <vector>

class OrdenAnillo: public Orden{
    private:
        float precio_total;
        vector<Anillo> anillos;
        vector<Cliente> clientes;
    public:
        // Constructor default
        OrdenAnillo(): Orden(){
            anillos = vector<Anillo>();
            clientes = vector<Cliente>();
            precio_total = 0;
        }
        // Setters
        void setAnillos(vector<Anillo> an){
            anillos = an;
        }
        void setClientes(vector<Cliente> cl){
            clientes = cl;
        }
        //Otros métodos 
        void imprimirOrden(){
            cout<< "ORDEN:"<<endl;
            for (int i = 0; i < clientes.size(); i++){
                cout <<"\t Cliente: " << clientes[i].getNombre()
                <<" "<< clientes[i].getApellido()<< endl;
                cout <<"\t Contacto: "<< clientes[i].getTelefono()<<endl;
                cout <<"\t\t"<<clientes[i].getCorreo()<<endl;
            }
            for (int i = 0; i < anillos.size(); i++){
                cout<<"\n\t Pedido: ANILLO"<<endl;
                cout<<"\t Características:"<<endl;
                cout<<"\t\t Material: "<< anillos[i].getMaterial()<<endl;
                if (anillos[i].getDiamante() == true){
                    cout<<"\t\t Diamante: SI"<<endl;
                    cout<<"\t\t Número de diamantes: "<< anillos[i].getNumDiamantes()<<endl;
                }else{
                    cout<<"\t\t Diamante: NO"<<endl;
                }
                cout<<"\t\t Talla: "<< anillos[i].getTalla()<<endl;
                cout<<"\t\t Precio: "<< anillos[i].calcularPrecio()<<endl;
            }
            for (int i = 0; i < anillos.size(); i++){
                precio_total = precio_total + anillos[i].calcularPrecio();
            }
            cout<<"\t Metodo de pago: "<< metodo_pago<<endl;
            cout<<"\t Precio total: "<< precio_total<<endl;
            cout<<"\t Su orden llegará en 20 días hábiles a la dirección: "
            <<direccion.getCalle()<<" "<< direccion.getNumero()
            <<" "<<direccion.getColonia()<<" "<<direccion.getCiudad()
            <<" "<<direccion.getEstado()<<" CP: "<<direccion.getCP()
            <<endl;
            precio_total = 0;
        }
}; 

#endif
